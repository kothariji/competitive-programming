#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, f = 0;
        cin >> n >> m;
        int a[n], b[m], sum1 = 0, sum2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 = sum1 + a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum2 = sum2 + b[i];
        }
        if (sum1 > sum2)
        {
            f = 1;
            cout << "0";
        }
        else
        {
            sort(a, a + n);
            sort(b, b + m);
            reverse(b, b + m);
            for (int i = 0; i < n; i++)
            {
                sum1 = sum1 - a[i] + b[i];
                sum2 = sum2 + a[i] - b[i];
                swap(a[i], b[i]);
                if (sum1 > sum2)
                {
                    f = 1;
                    cout << i + 1;
                    break;
                }
            }
            if (f == 0)
                cout << "-1";
        }
        cout << endl;
    }
}
