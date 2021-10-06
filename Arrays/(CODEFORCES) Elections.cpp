#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    int a[101];
    cin >> n;
    int Elodreip = 0, Awruk = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        Elodreip += a[i];
    }
    sort(a, a + n);
    int k = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        Awruk += k - a[i];
    }
    if (Awruk <= Elodreip)
    {
        Awruk = 0;
        while (Awruk < Elodreip)
        {
            for (int i = 0; i < n; i++)
            {
                Awruk += k - a[i];
            }
            if (Awruk > Elodreip)
            {
                cout << k << endl;
                break;
            }
            else
            {
                Awruk = 0;
                k++;
            }
        }
    }
    else
    {
        cout << k << endl;
    }

    return 0;
}