#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;

        bool ok = false;

        for (int i = 0; i <= n; i++)
        {
            int v = x;
            for (int j = 0; j < i; j++)
                v = v / 2 + 10;
            for (int j = 0; j < m; j++)
                v -= 10;

            if (v <= 0)
                ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}