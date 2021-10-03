#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
    int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	int sum = accumulate(a, a + n, 0LL);
	bool dp[n + 1][sum + 1];
	for (int i = 0; i <= n; i++) dp[i][0] = 1;
	for (int j = 1; j <= sum ; j++) dp[0][j] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (a[i - 1] > j)dp[i][j] =  dp[i - 1][j];
			else dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
		}
	}
	vector<int> v;
	for (int j = 1; j <= sum; j++)
	{
		if (dp[n][j]) v.push_back(j);
	}
	cout << v.size() << '\n';
	for (auto x : v ) cout << x << " ";
    return 0;
}