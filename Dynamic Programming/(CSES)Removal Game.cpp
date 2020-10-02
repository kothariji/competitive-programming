#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007

const  int inf = 1e18;
vector<int> a;
int dp[5001][5001];
int solve(int i , int j)
{
	if (i == j) return a[i];
	if (i + 1  == j) return max(a[i] , a[j]);
	if (dp[i][j] != -inf) return dp[i][j];
	return dp[i][j] = max(min(a[i] + solve(i + 2, j) , a[i] + solve(i + 1, j - 1)) , min(a[j] + solve(i + 1, j - 1) , a[j] + solve(i, j - 2)));
}
int32_t main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a.emplace_back(x);
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			dp[i][j] = -inf;
	cout << solve(0, n - 1);
	return 0;
}