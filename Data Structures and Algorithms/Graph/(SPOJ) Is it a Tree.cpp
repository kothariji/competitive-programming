#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX   20005
using namespace std;

vector <int> v1[MAX];
int visited[MAX];

void DFS(int i)
{
	visited[i]++;
	if(visited[i] == 1)
	{
		for(int j = 0; j<v1[i].size(); j++)
			DFS(v1[i][j]);
	}
}

int main()
{
	memset(visited, 0, sizeof(visited));
	int v, e,x,y;
	cin>>v>>e;
	for(int i = 0; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
	}
	int counter = 0;
	for(int i = 1; i<=v; i++)
	{
		
		if(visited[i] == 0)
		{
			counter++;
			DFS(1);
		}
	}

	for(int i = 1; i<=v; i++)
	{
		
		if((visited[i] > 1))
		{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";
	return 0;
	

}