#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll INF = 1e9 + 7;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << "0\n";
    }
    else if (x < y)
    {
        if (abs(y - x) % 2 == 0)
            cout << abs(y - x) / 2 << endl;

        else
        {
            int c = (abs(y - x) + 2 - 1) / 2;
            cout << c + 1 << endl;
        }
    }
    else
        cout << abs(x - y) << endl;
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
