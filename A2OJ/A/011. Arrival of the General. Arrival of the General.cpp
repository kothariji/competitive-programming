#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,mini,maxi,minh = INT_MAX,maxh = INT_MIN;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i] > maxh)
		{
			maxh = a[i];
			maxi = i;
		}
		if(a[i] <= minh)
		{
			minh = a[i];
			mini = i;
		}
	}
	if(maxh == minh)
		cout<<0<<endl;
	else if(maxi>mini)
		cout<<maxi+n-mini-1-1;
	else
		cout<<maxi+n-mini-1;

	return 0;
}