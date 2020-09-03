#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  10005
using namespace std;



bool visited[MAX];
int dist[MAX];
vector <int> v1[MAX];



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
	int v, x,y;
	cin>>v;

	for(int i = 1; i<v; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}

	memset(dist, 0, sizeof(dist));

	DFS(1, 0);

	int ans, maxi = INT_MIN;

	for(int i = 1; i<= v; i++)
	{
		if(dist[i] > maxi)
		{
			maxi = dist[i];
			ans = i;
		}
	}
	memset(dist, 0, sizeof(dist));
	memset(visited, false, sizeof(visited));
	DFS(ans, 0);
	cout<<*max_element(dist, dist+MAX);
}