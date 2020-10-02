#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
    int n, m; cin >> n >> m;
	int a[n + 1];
	for (int i = 1; i <= n; i++)cin >> a[i];
	int dp[n + 1][m + 1];
	memset(dp, 0 , sizeof dp);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i == 1)
			{
				if (a[i] == 0 ||  a[i] == j)
				{
					dp[i][j] = 1;
				}
				else dp[i][j] = 0;
			}
			else {
				if (a[i] == 0 || a[i] == j)
				{
					dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % mod;
				}
				else dp[i][j] = 0;
			}
		}
	}
	int ans = 0;
	for (int j = 1; j <= m; j++)
		ans = (ans + dp[n][j]) % mod;
	cout << ans;
    return 0;
}