#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int dp[n][n];
    bool f = 0, f1 = 0;
    if (a[n - 1][n - 1] == '*')
    {
        cout << 0;
        return 0;
    }
    memset(dp, 0, sizeof dp);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == n - 1)
            {
                if (a[i][j] == '*')
                {
                    dp[i][j] = 0;
                    f = 1;
                }
                else if (!f)
                    dp[i][j] = 1;
            }
            else if (j == n - 1)
            {
                if (a[i][j] == '*')
                {
                    dp[i][j] = 0;
                    f1 = 1;
                }
                else if (!f1)
                    dp[i][j] = 1;
            }
            else
            {
                if (a[i][j] == '*')
                    dp[i][j] = 0;
                else
                    dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;
            }
        }
    }

    cout << dp[0][0] % mod;
    ;
    return 0;
}