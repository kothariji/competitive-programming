#include <bits/stdc++.h>

#define fo(i, n) for (int i = 0; i < (n); ++i)
#define INF 1000000000000000000
#define MOD 1000000009;

using namespace std;
using ll = long long;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        // Make sure its not repeating, increment it by i
        // Make sure its not exceeding the n value, take mod n
        fo(i, n) cout << (i + n / 2) % n + 1 << " ";
        cout << "\n";
    }
}