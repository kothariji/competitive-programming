#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

bool visited[MAX];
bool ans;
int color[MAX];
vector <int> v1[MAX];


void DFS(int i, vector <int> *v1, bool col)
{
	if(visited[i] == false)
	{
		visited[i] = true;
		color[i] = col ? 1 : 2;
		for(int j = 0; j < v1[i].size(); j++)
		DFS(v1[i][j], v1, !col);
	}
	else if(((color[i] == 1) && (col == false)) ||((color[i] == 2) && (col == true)) )
		ans = false;
	
}

int main()
{
		memset(color, 0, sizeof(color));
		memset(visited, false, sizeof(visited));

		int v , e, x, y;
		cin>>v>>e;

		for(int i =0; i<e; i++)
		{
			cin>>x>>y;
			v1[x].push_back(y);
			v1[y].push_back(x);
		}


		int flag= 0;
		ans = true;
		for(int i = 1; i<=v; i++)
		{
			if(visited[i] == false)
				DFS(i, v1, true);
			if(ans == false)
			{
				flag =1;
				break;
			}
		}
		if(flag)
			cout<<"NO the Graph is not Bipartite"<<endl;
		else
			cout<<"YES the Graph is Bipartite"<<endl;
}