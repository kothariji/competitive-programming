#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,h,a,count = 0;
	cin>>n;
	vector <vector <int>> v1;
	for(int i=0; i<n; i++)
	{
		cin>>h>>a;
		v1.push_back({h,a});
	}
	for(int i=0; i < v1.size(); i++)
	{
		for(int j=0; j<v1.size(); j++)
		{
			if((i != j) and v1[i][0] == v1[j][1])
				count++;
		}
	}
	cout<<count;
}