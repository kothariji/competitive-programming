#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

bool visited[105];
vector <int> v1[105];
vector <int> timein(105, 0);
vector <int> timeout(105, 0);
int counter;

void dfs(int i)
{
	visited[i] = true;
	timein[i] = ++counter;
	for(int j = 0; j<v1[i].size(); j++)
	{
		if(visited[v1[i][j]] == false)
			dfs(v1[i][j]);
	}
	timeout[i] = ++counter;
}

int main()
{
	counter = 0;
	int v, e, x, y;
	cout<<"Enter the number of vertices and edges: ";
	cin>>v>>e;
	for(int  i = 0 ; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}


	dfs(1);

	for(int i = 1; i<=v; i++)
		cout<<timein[i]<<" ";
	cout<<endl;

	for(int i = 1; i<=v; i++)
		cout<<timeout[i]<<" ";
	cout<<endl;

}
