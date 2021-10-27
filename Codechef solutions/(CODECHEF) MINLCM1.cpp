#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll INF = 1e9 + 7;

void solve()
{
    ll x, k;
    cin >> x >> k;

    cout << 2 * x << ' ' << x * k * (x * k - 1) << '\n';
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
