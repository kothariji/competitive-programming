#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 105
using namespace std;

vector <int> v1[MAX];
vector <int> subSize(MAX, 0);
vector <bool> visited(MAX, false);

int DFS(int i)
{
	visited[i] = true;
	int count = 1;
	for(int j = 0; j<v1[i].size(); j++)
	{
		if(visited[v1[i][j]] == false)
		{
			count += DFS(v1[i][j]);
		}
	}
	subSize[i] = count;
	return subSize[i];
}


int main()
{
	int v, e, x, y;
	cout<<"Enter the number of vertices and edges: ";
	cin>>v>>e;
	for(int i =0 ; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}

	int ans = DFS(1);

	for(int i = 1; i<=v; i++)
		cout<<i<<": "<<subSize[i]<<endl;
}
