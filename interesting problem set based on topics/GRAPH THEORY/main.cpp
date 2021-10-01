#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vec vector<int>
#define mp make_pair
using namespace std;
vector<int>adj[100001];
int visited[100001],tin[100001],out[100001],timer;
void dfs(int node)
{
  vis[node]=1;
  tin[node]=out[node]=timer++;
  for(int child: adj[node])
  {
    if(!vis[child])
        dfs(child);
  }
  out[node]=timer++;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  //cin>>t;
  while(t--)
  {
    int n,q,i;
    cin>>n>>q;
    int a[26]={0};
    char ar[n+1];
    for(i=1;i<=n;i++)
    {
      cin>>ar[i];
      a[(int)ar[i]-97]++;
    }
    for(i=0;i<n-1;i++)
    {
      int u,v;
      cin>>u>>v;
      adj[u].pb(v);
      adj[v].pb(u);
    }
    dfs(1);
    vector<pii> v;
    for(i=1;i<=n;i++)
    {
      v.pb({tin[i],i});
    }
    sort(v.begin(),v.end());
    while(q--)
    {
      int x;
      string s;
      cin>>x>>s;
    }
  }
}
