#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 105
using namespace std;


vector <int> v1[MAX];
vector <bool> visited(MAX, false);
vector <int> in(MAX, 0);
vector <int> low(MAX, 0);
int timer;

void DFS(int i, int par)
{
	visited[i] = true;
	in[i] = timer;
	low[i] = timer;
	timer++;
	for(int j =0; j<v1[i].size(); j++)
	{
		if(v1[i][j] == par)
		{
			//that means its his parent, so its not the back edge
			continue;
		}
		if(visited[v1[i][j]] == true)
		{
			//its a backedge
			low[i] = min(low[i], in[v1[i][j]]);
		}
		else
		{
			//forward edge...we will call dfs
			DFS(v1[i][j], i);
			if(low[v1[i][j]] > in[i])
				cout<<"Found a bridge: "<<i<<" -> "<<v1[i][j]<<endl;
			low[i] = min(low[i], low[v1[i][j]]);
		}
	}
}

int main()
{
	int v, e, x, y;
	cin>>v>>e;
	timer = 0;
	for(int i = 0; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}

	DFS(1,-1);

}