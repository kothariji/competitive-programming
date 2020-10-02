#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int dp[5001][5001];
int32_t main()
{
	string s, v; cin >> s >> v;
	int n = s.size();
	int m = v.size();
	for (int i = 0; i <= n; i++) dp[i][0] = i;
	for (int j = 0; j <= m; j++) dp[0][j] = j;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (s[i - 1] ==  v[j - 1]) dp[i][j]  = dp[i - 1][j - 1];
			else dp[i][j] = 1 + min(dp[i - 1][j] , min( dp[i][j - 1], dp[i - 1][j - 1]) );
		}
	}
	cout << dp[n][m];

	return 0;
}