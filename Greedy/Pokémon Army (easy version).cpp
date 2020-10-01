#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
       
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
           
        }
        ll r = 0;
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (r == 0)
            {
                if (arr[i + 1] > arr[i])
                {
                    continue;
                }
                else
                {
                    ans += arr[i];
                    r = 1;
                }
            }
            else
            {
                if (arr[i + 1] < arr[i])
                {
                    continue;
                }
                else
                {
                    ans -= arr[i];
                    r = 0;
                }
            }
            
        }
        if (r == 0)
        {
            ans += arr[n - 1];
        }
       cout << ans << "\n";
    }
	return 0;
}