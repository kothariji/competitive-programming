#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

bool visited[105];		//by default it is initialised with false;
vector <int> v1[105];


void DFS(int vertex)
{
	if(visited[vertex] == false)
	{
		cout<<vertex<<" ";
		visited[vertex] = true;
		for(int j = 0; j < v1[vertex].size(); j++)
		{
			DFS(v1[vertex][j]);
		}
	}
	return;
}

int main()
{
	int no_of_vertex, no_of_edges;
	cout<<"Enter the number of vertices: ";
	cin>>no_of_vertex;


	memset(visited, false, sizeof(visited));

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

	for(i = 1; i <= no_of_vertex; i++){
		if(visited[i] == false)
		{
			cout<<"Connected Components: ";
			DFS(i);
			cout<<endl;
		}

	}
	return 0;
}
