//Solution By Hardik Mittal
//Question :- https://cses.fi/problemset/task/1666
#include <bits/stdc++.h>
#define ll long long
#define vl vector <ll>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define FL(i,a,b) for (int i = a; i < b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
#define MOD 1000000007

vector<ll> edge[100001];
bool vis[100001];
vector<ll> c;

void dfs(ll node)
{
    if(vis[node])
    {
        return;
    }

    vis[node]=true;

    for(auto child : edge[node])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }
}

void solve()
{
    ll i,n,m;
    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        ll a,b;
        cin>>a>>b;
        edge[a].PB(b),edge[b].PB(a);
    }

    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            //cont++;
            dfs(i);
            c.PB(i);
        }
    }

    ll ans=c.size()-1;
    cout<<ans<<endl;

    for(i=1;i<=ans;i++)
    {
        cout<<c[0]<<" "<<c[i]<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test_cases=1;
    while(test_cases--)
    {
        solve();
    }
    return 0;
}
