#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            int x[n+1], y[n+1];
            for (int i = 0; i < n; i++)
            {
                cin >> x[i] >> y[i];
            }
            sort(x, x + n);
            sort(y, y + n);
            long long px = x[n / 2] - x[n / 2 - 1] + 1;
            ll py = y[n / 2] - y[n / 2 - 1] + 1;
            long long res = px * py;
            cout << res << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int x1, y1;
                cin >> x1 >> y1;
            }
            cout << 1 << endl;
        }
    }
}