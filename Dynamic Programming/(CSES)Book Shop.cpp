#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
int32_t main()
{
    //KNAPSACK
    int n, x;
    cin >> n >> x;
    int price[n], pages[n];
    for (int i = 0; i < n; i++)
        cin >> price[i];
    for (int i = 0; i < n; i++)
        cin >> pages[i];
    int dp[x + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; ++i)
        for (int j = x; j > 0; --j)
            if (price[i] <= j)
                dp[j] = max(dp[j], pages[i] + dp[j - price[i]]);
    cout << dp[x];
    return 0;
}