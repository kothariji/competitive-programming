#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	vector <int> v1[3];
	vector <int> ::iterator it;
	int n,data;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>data;
		if(data == 1)
			v1[0].push_back(i+1);
		else if(data == 2)
			v1[1].push_back(i+1);
		else
			v1[2].push_back(i+1);
	}
	int count = min(v1[0].size(), min(v1[1].size(), v1[2].size()));
	if(count == 0)
		cout<<0;
	else
	{
		cout<<count<<endl;
		while(count--)
		{
			cout<<v1[0][0]<<" "<<v1[1][0]<<" "<<v1[2][0]<<endl;
			it = v1[0].begin();
			v1[0].erase(it);
			it = v1[1].begin();
			v1[1].erase(it);
			it = v1[2].begin();
			v1[2].erase(it);
		}
	}
	
	return 0;
}