#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{

	int n,data;
	cin>>n;
	int a[n];
	map <int , int >mp1;
	for(int i=0; i<n; i++)
	{
		cin>>data;
		if(mp1.find(data) == mp1.end())
			mp1[data] = 1;
		else
			mp1[data]++;

	}
	int limit;
	if(n%2)
		limit = (n+1)/2;
	else
		limit = n/2;

	for(auto c: mp1)
		if(limit < c.second)
		{
			cout<<"NO";
			return 0;
		}
	cout<<"YES";	


	return 0;
}