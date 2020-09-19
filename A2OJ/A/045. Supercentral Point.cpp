#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,x,y;
	cin>>n;
	vector <pair<int , int>> v1;
	for(int i=0; i<n; i++)
	{
		cin>>x>>y;
		v1.push_back({x,y});
	}
	int count = 0;
	for(int i=0; i<n; i++)
	{
		int up = 0;
		int down = 0;
		int left = 0;
		int right = 0;

		for(int j =0; j<n; j++)
		{
			if(i != j)
			{
				if((v1[i].first == v1[j].first) and (v1[i].second > v1[j].second))
					down = 1;
				if((v1[i].first == v1[j].first) and (v1[i].second < v1[j].second))
					up = 1;
				if((v1[i].first > v1[j].first) and (v1[i].second == v1[j].second))
					left = 1;
				if((v1[i].first < v1[j].first) and (v1[i].second == v1[j].second))
					right = 1;		 
			}
		}
		if((up + down + left + right) == 4)
			count++;
	}
	cout<<count;
	return 0;
}