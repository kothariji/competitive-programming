#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

bool visited[MAX];
bool ans;
int color[MAX];


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
	int t;
	cin>>t;
	int cs = 0;
	while(t--)
	{

		cs++;

		memset(color, 0, sizeof(color));
		memset(visited, false, sizeof(visited));

		int bug , noi, bug1, bug2;
		cin>>bug>>noi;


		vector <int> v1[bug+5];

		for(int i =0; i<noi; i++)
		{
			cin>>bug1>>bug2;
			v1[bug1].push_back(bug2);
			v1[bug2].push_back(bug1);
		}


		int flag= 0;
		ans = true;
		for(int i = 1; i<=bug; i++)
		{
			if(visited[i] == false)
				DFS(i, v1, true);
			if(ans == false)
			{
				flag =1;
				break;
			}
		}
		cout<<"Scenario #"<<cs<<":"<<endl;
		if(flag)
			cout<<"Suspicious bugs found!"<<endl;
		else
			cout<<"No suspicious bugs found!"<<endl;
	}
}