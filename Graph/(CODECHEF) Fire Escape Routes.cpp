#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 100005
using namespace std;

bool visited[MAX];
lli len = 0;

void DFS(int i , vector <vector <int> > &v1)
{
	visited[i] = true;
	len++;
	for(int j = 0; j<v1[i].size(); j++)
	{
		if(visited[v1[i][j]] == false)
			DFS(v1[i][j], v1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int v, e, x, y;
		cin>>v>>e;
		vector <vector <int> >v1(v+5);
		for(int i =1; i<=e; i++)
		{
			cin>>x>>y;
			v1[x].push_back(y);
			v1[y].push_back(x);
		}
		memset(visited, false, sizeof(visited));
		int noc = 0;
		lli mul = 1;
		for(int i = 1; i<=v; i++)
		{
			if(visited[i] == false)
			{
				noc++;
				len = 0;
				DFS(i, v1);
				mul = (mul*len)%1000000007;
			}
		}
		cout<<noc<<" "<<mul<<endl;
	}


}
