#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vec vector<int>
#define mp make_pair
using namespace std;
int n,m,M[1001][1001];
void bfs(int s,int n)
{
  queue<int> q;
  vector<bool> used(n);
  vector<int> d(n), p(n);

  q.push(s);
  used[s] = true;
  p[s] = -1;
  while (!q.empty()) {
      int v = q.front();
      q.pop();
      for (int u : adj[v]) {
          if (!used[u]) {
              used[u] = true;
              q.push(u);
              d[u] = d[v] + 1;
              p[u] = v;
          }
      }
  }
}
int bfs(int n)
{
  queue<int> q;
  map<int,bool> used;
  q.push(n);
  used[n] = true;
  int l=0;
  while (!q.empty()) {
    int m=q.size();
    while(m--){
      int v = q.front();
      q.pop();
      if(v==1)
      return l;
      if(v%2==0 && !used[v/2])
      q.push(v/2),used[v/2]=true;
      if(v%3==0 && !used[v/3])
      q.push(v/3),used[v/3]=true;
      if(!used[v-1])
      q.push(v-1),used[v-1]=true;

      }
      l++;
    }
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    int i,j;
    for(i=0;i<m;i++)
    {
      int u,v;
      cin>>u>>v;
      adj[u].pb(v);
      adj[v].pb(u);
    }


  }
}

