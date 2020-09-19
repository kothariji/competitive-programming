#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int mini = INT_MAX;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(mini > a[i] and a[i] != 0)
			mini = a[i];
	}
	while(1)
	{
		for(int i=0; i<n; i++)
		{
			if((a[i] != mini) and (a[i] != 0))
			{
				if(a[i] % mini == 0 )
					a[i] = mini;	
				else
					a[i] %= mini;
			}
		}
		int minprev= mini;	
		for(int i=0; i<n; i++)
		{
			if(mini > a[i] and a[i] != 0)
				mini = a[i];
		}
		if(mini == minprev)
			break;
	}
	lli sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += a[i];
	}
	cout<<sum;
	return 0;
}