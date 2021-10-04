#include<iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
 
int n = 1e5 + 5,k;
vvi adj(n);
vi a(n);
vi subtreeXOR(n);
int x;
bool isSubtree;
void dfs1(int u,int p)
{
    subtreeXOR[u] = a[u];
    for (int v:adj[u]){
        if (v != p){
            dfs1(v,u);
            subtreeXOR[u] ^= subtreeXOR[v];
        }
    }
}
bool dfs2(int node,int p,bool isThereANC)
{
    if (isThereANC and subtreeXOR[node] == x)return true;
    if (subtreeXOR[node] == x and isSubtree)return true;
    if (subtreeXOR[node] == 0)isThereANC = 1;
    for (int v:adj[node]){
        if (v != p){
            if (dfs2(v,node,isThereANC))
                return true;
        }
    }
    if (subtreeXOR[node] == x)isSubtree = 1;
    return false;
}
void solve()
{
    cin>>n>>k;
    for (int i = 1;i<=n;i++)adj[i].clear(),a[i] = 0,subtreeXOR[i] = 0;
    
    int xorSum = 0;
    isSubtree = 0;
 
    for (int i = 1;i<=n;i++){
        cin>>a[i];
        xorSum ^= a[i];
    }
 
    x = xorSum;
    
    for (int i = 1;i<=n - 1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v),adj[v].pb(u);
    }
 
    if (xorSum == 0){
        cout<<"YES"<<'\n';
        return;
    }
 
    if (k == 2){
        cout<<"NO"<<'\n';
        return;
    }
    
   
 
    dfs1(1,1);
    if (dfs2(1,1,0))cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int main()
{
    setIO();
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}