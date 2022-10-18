#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll INF = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 2 * (n - k) + (2 * ((k - 1) / 2));
    cout << ans << '\n';
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
