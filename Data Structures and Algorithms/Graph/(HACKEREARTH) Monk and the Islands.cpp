#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int v, e, x, y;
		cin>>v>>e;

		vector < vector<int> >v1(v+1);

		for(int i = 0; i<e; i++)
		{
			cin>>x>>y;
			v1[x].push_back(y);
			v1[y].push_back(x);
		}

		vector <bool> visited(v+1, false);
		vector <int> distance(v+1, 0);
		queue <int> q1;

		q1.push(1);
		visited[1] = true;
		while(!q1.empty())
		{
			int temp = q1.front();
			q1.pop();
			for(int j =0; j<v1[temp].size(); j++)
				if(visited[v1[temp][j]] == false)
				{	
					distance[v1[temp][j]] = distance[temp]+1;
					visited[v1[temp][j]] = true;
					q1.push(v1[temp][j]);
				}
		}
		cout<<distance[v]<<endl;
	}
}