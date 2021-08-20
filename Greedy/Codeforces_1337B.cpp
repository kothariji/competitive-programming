#include <bits/stdc++.h>
#include <cstdlib>
#include <cctype>
#include <string>
#define ll long long
#define repvar(i, a, b, c) for (ll i = a; i < b; i += c)
#define rep(i, a, b) for (ll i = a; i < b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        ll temp = x;
        ll ctr=0;

        rep(i, 0, n)
        {
            temp = floor(temp / 2) + 10;
            {
                if (temp < 0)
                {
                    ctr++;
                    cout << "YES"
                         << "\n";
                    break;
                }
            }
        }
        rep(i, 0, m)
        {
            temp -= 10;
            if (temp < 0)
            {
                ctr++;
                cout << "YES"
                     << "\n";
                break;
            }
        }
        if(ctr==0)
        cout<<"NO"<<"\n";
    }
}
