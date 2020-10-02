#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
const int N  = 500 * (500 + 1) / 4;
int dp[501][N + 1];
int subsetsum(int a[] , int n , int sum)
{
	for (int i = 0; i < n + 1; i++) dp[i][0] = 1;
	for (int j = 1; j < sum + 1; j++) dp[0][j] = 0;

	for (int i = 1; i < n ; i++)
	{
		for (int j = 1; j < sum + 1; j++)
		{
			if (a[i - 1] > j)
			{
				dp[i][j] = dp[i - 1][j];
			}
			else
			{
				dp[i][j] = (dp[i - 1][j - a[i - 1]] + dp[i - 1][j]) % mod;
			}
		}
	}
	return dp[n - 1][sum] % mod;
}
int32_t main()
{
    	int n; cin >> n;
	int sum = n * (n + 1) / 2;
	if (sum & 1) {
		cout << 0; return 0;
	}
	sum /= 2; int a[n] = {};
	for (int i = 0; i < n; i++)a[i] = i + 1;
	cout << subsetsum(a, n, sum);
    return 0;
}