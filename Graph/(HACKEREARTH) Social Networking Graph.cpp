#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int v, e, x, y;
	cin>>v>>e;
	vector < vector<int> > v1(v+1);

	for(int i =0; i<e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}
	int q;
	cin>>q;
	while(q--)
	{
		vector <bool> visited(v+1, false);
		vector <int> dist(v+1, -1);
		cin>>x>>y;
		queue <int> q1;
		q1.push(x);
		visited[x] = true;
		dist[x] = 0;
		while(!q1.empty())
		{
			int temp = q1.front();
			q1.pop();
			for(int j =0; j<v1[temp].size(); j++)
			{
				if(visited[v1[temp][j]] == false)
				{
					q1.push(v1[temp][j]);
					visited[v1[temp][j]] = true;
					dist[v1[temp][j]] = dist[temp] + 1;
				}
			}
		}
		int count = 0;
		for(auto c: count)
			if(c == y)
			count++;
		cout<<count<<endl; 
	}
	return 0;
}
