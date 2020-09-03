#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 105
using namespace std;


int main()
{
	int v, e, x, y;
	cout<<"Enter the number of vertices and edges: ";
	cin>>v>>e;

	vector < vector<int> >v1(v+2);

	for(int i =1 ; i <= e; i++)
	{
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}

	queue <int> q1;
	vector <bool> visited(v+2, false);
	vector <int> distance(v+2, 0);
	q1.push(1);
	visited[1] = true;
	while(!q1.empty())
	{
		int temp = q1.front();
		q1.pop();
		cout<<temp<<" ";
		for(int j = 0; j < v1[temp].size(); j++)
		{
			if(visited[v1[temp][j]] == false)
			{
				q1.push(v1[temp][j]);
				visited[v1[temp][j]] = true;
				distance[v1[temp][j]] = distance[temp]+1;
			}
		}
	}
	cout<<endl<<"Distance: ";
	for(int i = 1; i<=v; i++)
		cout<<distance[i]<<" ";

	return 0;
}
