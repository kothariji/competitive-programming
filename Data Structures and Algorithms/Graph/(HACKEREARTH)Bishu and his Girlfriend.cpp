#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;
 
 
 
bool visited[1005];
int dist[1005];
vector <int> v1[1005];
 
 
 
void DFS(int i, int dis)
{
	if(visited[i] == false)
	{
		visited[i] = true;
		dist[i] = dis;
		for(int j = 0; j<v1[i].size(); j++)
			DFS(v1[i][j], dis+1);
	}
}
 
 
 
int main()
{
	int v, e,x,y;
	cin>>v;
	e = v-1;
 
	for(int i = 0; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}
 
 
	int q,data;
	cin>>q;
 
 
	set <int> s1;
	while(q--)
	{
		cin>>data;
		s1.insert(data);
	}
 
 
	memset(dist, 0, sizeof(dist));
 
 
	DFS(1, 0);
 
 
	int ans, mini = INT_MAX;
 
	for(auto c: s1)
	{
		if((dist[c] < mini) && (dist[c] > 0))
		{
			mini = dist[c];
			ans = c;
		}
	}
	cout<<ans;
}