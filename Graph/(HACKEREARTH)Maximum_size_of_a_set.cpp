// Problem- https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/practice-problems/algorithm/social-graph-1-ac58bbdf/
#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define mod 1000000007

vector<int> g[200009];
bool vis[200009];
int dp[2000009];
void dfs(int node){
    vis[node]=true;

	for(auto adj: g[node])
	{
		if(!vis[adj])
		  dfs(adj);
		dp[node]=max(dp[node],1+dp[adj]);
	}
}

int main() 
{
	memset(dp,0,sizeof(dp));
	memset(vis,false,sizeof(vis));

	int n,m,u,v;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&u,&v);
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		  dfs(i);
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dp[i]);
	}
	cout<<1+ans<<endl;
}
