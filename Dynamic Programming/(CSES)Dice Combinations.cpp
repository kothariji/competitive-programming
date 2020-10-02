#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
	int n;
	cin >> n;
	int dp[n + 1] = {0};
	dp[0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i >= j) dp[i] = (dp[i] + dp[i - j]) %  mod;
		}
	}
	cout << dp[n] % mod;
	return 0;
}