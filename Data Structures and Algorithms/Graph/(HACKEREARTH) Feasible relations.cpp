#include <bits/stdc++.h>
#define lli int
#define endl "\n"
#define MAX 1000005
using namespace std;

vector <lli> visited(MAX, -1);
int counter;

void DFS(lli i, vector < vector<lli> > v1)
{
	visited[i] = counter;
	for(int j = 0; j<v1[i].size(); j++)
		if(visited[v1[i][j]] == -1)
			DFS(v1[i][j], v1);
}

int main()
{
	lli t;
	cin>>t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(t--)
	{
		lli n, k, num1, num2;
		cin>>n>>k;
		vector < vector<lli> > v1(n+1);
		vector <pair <lli, lli> > notequal;
		string s;
		for(lli i = 0; i<k; i++)
		{	
			cin>>num1>>s>>num2;
			if(s[0] == '=')
			{
				v1[num1].push_back(num2);
				v1[num2].push_back(num1);
			}
			else {
				notequal.push_back({num1, num2});
			}
		}

		for(lli i =0 ;i <=n; i++)
			visited[i] = -1;
		counter = 0;
		for(lli i =1; i<=n; i++)
		{
			if(v1[i].size() > 0)
			{
				if(visited[i] == -1)
				{
					counter++;
					DFS(i, v1);
				}
			}
		}
		bool ans = true;
		for(auto c: notequal)
			if((visited[c.first] == visited[c.second]) && (visited[c.first] != -1))
			{
				ans = false;
				break;
			}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
