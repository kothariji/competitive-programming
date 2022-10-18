#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int a[n][n], b[n][n], x = 2, y = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                a[i][j] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    a[i][j] = y;
                    y = y + 2;
                }
                else
                {
                    a[i][j] = x;
                    x = x + 2;
                }
            }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
