#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  100005
using namespace std;

vector <int> v1[MAX];
bool visisted[MAX];
bool cycle = false;

bool DFS(int i, int parent)
{
	if(visisted[i] == false)
	{
		visisted[i] = true;
		for(int j = 0; j<v1[i].size(); j++)
			if(v1[i][j] != parent)
				DFS(v1[i][j], i);
	}
	else
	{
		cycle = true;
	}
}

int main()
{
	int v, e, x, y;
	cout<<"Enter the number of vertex: ";
	cin>>v;
	cout<<"Enter the number of edges: ";
	cin>>e;

	for(int i = 0; i<e; i++)
	{
		cout<<"Enter both the vertex of the edge "<<i+1<<": ";
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}

	DFS(1, 0);

	if(cycle)
		cout<<"cycle exists in graph";
	else
		cout<<"cycle does not exists in graph";

}
