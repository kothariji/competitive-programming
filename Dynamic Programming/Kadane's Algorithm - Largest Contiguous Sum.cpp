#include <bits/stdc++.h>
#define int long long
#define INF 1000000000000000000
#define MOD 1000000009;
#define mid(l, u) ((l + u) / 2)
#define rchild(i) (i * 2 + 2)
#define lchild(i) (i * 2 + 1)
using namespace std;

signed main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dp[n];
    dp[0] = a[0];
    int ans = a[0];
    for (int i = 1; i < n; i++)
        ans = max(ans, (dp[i] = a[i] + max(dp[i - 1], (int)0)));
    cout << ans << endl;
}

/*
Sample Input:
8
-2 -3 4 -1 -2 1 5 -3
Sample Output:
7
*/