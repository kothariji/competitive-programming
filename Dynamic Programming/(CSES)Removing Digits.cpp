#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
vector<int> sum (int n)
{
	vector<int> v;
	while (n > 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}
	return v;
}
int32_t main()
{
    int n; cin >> n;
	int dp[n + 1];
	for (int i = 0; i <= n; i++)dp[i] = 10000000;
	dp[0] = 0;
	for (int i = 1; i <= 9; i++) dp[i] = 1;
	for (int i = 10; i <= n; i++)
	{
		auto v = sum(i);
		for (auto x : v)
		{
			dp[i] = min(dp[i - x] , dp[i]);
		}
		dp[i] += 1;
	}
	cout << dp[n];
	return 0;
}   