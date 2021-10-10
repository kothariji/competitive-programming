#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

#define endl "\n"


#define num 1007
#define MOD 1000000007

#define ll long long


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {

        ll n, c;
        cin >> n >> c;

        ll i;

        ll x[n + 1];
        ll k[n + 1];

        x[0] = 0, k[0] = 0;

        for (i = 1; i <= n; i++)
            cin >> x[i];

        for (i = 1; i <= n; i++)
            cin >> k[i];

        ll dp[n + 1][2];
        dp[0][0] = 0;
        dp[0][1] = 0;

        dp[1][0] = x[1], dp[1][1] = c * k[1] + c;

        for (i = 2; i <= n; i++)
        {

            dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + x[i];
            dp[i][1] = min(dp[i - 1][0] + c * k[i] + c, dp[i - 1][1] + c);

        }

        cout << n << " " << min(dp[n][0], dp[n][1]) << endl;

    }


}
