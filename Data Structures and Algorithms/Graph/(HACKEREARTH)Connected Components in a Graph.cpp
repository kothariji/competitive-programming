#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;
 
bool visited[1000005];
 
void DFS(int i, vector <int> *v1)
{
	if(visited[i] == false)
	{
		visited[i] = true;
		for(int j = 0; j<v1[i].size(); j++)
			DFS(v1[i][j], v1);
	}
}
 
int main()
{
	int v, e,x,y;
	cin>>v>>e;
	vector <int> v1[v+1];
	for(int i = 0; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}
	int counter = 0;
	for(int i =1; i<=v; i++)
	{
		if(!visited[i])
		{
			counter++;
			DFS(i, v1);
		}
	}
	cout<<counter;
}



