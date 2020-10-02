#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
    int a, b; cin >> a >> b;
	int dp[a + 1][b + 1];
	memset(dp, 0, sizeof dp);
	// i->  height
	// j -> width
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (i == j) dp[i][j] = 0;
			else {
				int ans = 1e8;
				for (int k = 1; k < j; k++)
				{
					ans = min (ans, 1 + dp[i][j - k] + dp[i][k]);
				}
				for (int k = 1; k < i; k++)
				{
					ans = min(ans, 1 + dp[i - k][j] + dp[k][j]);
				}
				dp[i][j] = ans;
			}
		}
	}
	cout << dp[a][b];
    return 0;
}