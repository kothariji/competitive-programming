#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > 1 && i % 2 == 0)
            {
                cout << "First" << "\n";
                flag = 1;
                break;
            }
            else if (a[i] > 1 && i % 2 != 0)
            {
                cout << "Second" << "\n";
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
        {
            if (n % 2 == 0)
            {
                cout << "Second" << "\n";
            }
            else
            {
                 cout << "First" << "\n";
            }
        }
    }
 
	return 0;
}