#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

bool visited[105];		//by default it is initialised with false;
vector <int> v1[105];
int dist[105];

void DFS(int vertex, int dis)
{
	if(visited[vertex] == false)
	{
		dist[vertex] = dis;
		visited[vertex] = true;
		for(int j = 0; j < v1[vertex].size(); j++)
			DFS(v1[vertex][j], dis+1);

	}
	return;
}

int main()
{
	int no_of_vertex, no_of_edges;
	cout<<"Enter the number of vertices: ";
	cin>>no_of_vertex;


	memset(visited, false, sizeof(visited));
	memset(dist, 0, sizeof(dist));

	int i, j;
	cout<<"Enter the number of edges: ";
	cin>>no_of_edges;

	for(int edge = 1; edge <= no_of_edges; edge++)
	{
		cout<<"Enter the vertices for edge "<<edge<<": ";
		cin>>i>>j;
		v1[i].push_back(j);
		v1[j].push_back(i);
	}

	DFS(1,0);

	for(int i = 1; i<=no_of_vertex; i++)
	{
		cout<<"Distance from 1 to "<<i<<" is: "<<dist[i]<<endl;
	}
	return 0;
}
