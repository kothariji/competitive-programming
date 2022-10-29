#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> &v, int n, int sum, vector<vector<bool>> &dp)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (v[i - 1] > sum) dp[i][j] = dp[i - 1][j];
            else
            {
                bool take = dp[i - 1][j - v[i - 1]];
                bool notTake = dp[i - 1][j];
                dp[i][j] = take | notTake;
            }
        }
    }
    return dp[n][sum];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(sum / 2 + 1));
    for (int j = 0; j <= sum / 2; j++)
        dp[0][j] = false;
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    if (sum % 2)
    {
        return false;
    }
    else
    {
        subsetSum(v, n, sum / 2, dp);
    }
}