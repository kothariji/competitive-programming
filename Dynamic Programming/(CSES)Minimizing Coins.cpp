#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
		int n , sum;
	cin >> n >> sum;
	int coins[n];
	int dp[sum + 1];
	for (int i = 0; i <= sum; i++)
		dp[i] = INT_MAX;
	dp[0] = 0;
	for (int i = 0; i < n; i++) cin >> coins[i];
	for (int i = 1; i <= sum; i++)
	{
		for (int coin : coins)
		{
			if (coin <= i)
			{
				dp[i] = min(dp[i] , 1 + dp[i - coin]);
			}
		}
	}
	if (dp[sum] == INT_MAX)dp[sum] = -1;
	cout << dp[sum] ;
    return 0;
}   