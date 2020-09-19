#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n;i++)
		cin>>a[i];
	int mindiff = INT_MAX;
	int x,y;
	for(int i=0; i<n-1;i++)
	{
		if(abs(a[i] - a[i+1]) < mindiff)
		{
			mindiff = abs(a[i] - a[i+1]);
			x = i+1;
			y = i+1+1;
		}
	}
	if(abs(a[0] - a[n-1]) < mindiff)
		{
			mindiff = abs(a[0] - a[n-1]);
			x = 1;
			y = n;
		}
	cout<<x<<" "<<y;	
	
	return 0;
}