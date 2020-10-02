#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
	int n , sum;
	cin >> n >> sum;
	int coins[n];
	for (int i = 0; i < n; i++) cin >> coins[i];
	int dp[sum + 1] = {0};
	dp[0] = 1;
	for (int coin : coins)
		for (int i = 1; i <= sum; i++)
		{
			{
				if (i >= coin)
					dp[i] = (dp[i] + dp[i - coin]) % mod;
			}
		}
	cout << dp[sum] % mod;
    return 0;
}   