#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,c;
	cin>>n>>c;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int maxi = 0;
	for(int i=0; i<n-1; i++)
	{
		int left = a[i] - c;
		if(left >= a[i+1])
		{
			int profit = left - a[i+1];
			if(profit > maxi)
				maxi = profit;
		}
	}
	cout<<maxi;

	return 0;
}