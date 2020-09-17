#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

lli dp[1000005];

lli maxsum(lli n)
{
	if(n < 1000005)
	{
		if(dp[n] == -1)
			dp[n] = max(maxsum(n/2) + maxsum(n/3) + maxsum(n/4), n);
		return dp[n];
	}

	lli x = maxsum(n/2) + maxsum(n/3) + maxsum(n/4);
	return max(x, n);
}

int main()
{
	
	lli n;
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	while(cin>>n)
	{
		cout<<maxsum(n)<<endl;
	}
	
}