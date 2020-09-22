#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int t,cs = 0;
	cin>>t;	
	while(t--)
	{
		cs++;
		lli n;
		cin>>n;
		if(n==0)
		{
			cout<<"Case "<<cs<<": "<<0<<endl;
			continue;	
		}
		lli a[n],dp[n];
		for(lli i=0; i<n; i++)
			cin>>a[i];
		
		dp[0] = a[0];
		dp[1] = max(dp[0], a[1]);
		for(int i=2; i<n; i++)
			dp[i]  =max(dp[i-1],dp[i-2]+a[i]);
		cout<<"Case "<<cs<<": "<<dp[n-1]<<endl;
	}

	
	return 0;
}