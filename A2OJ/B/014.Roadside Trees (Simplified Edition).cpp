#include <bits/stdc++.h>
#define ll int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

 
 
 
int main() 
{
	fast;
    ll t;
    cin >> t;
    ll a[t];
    for (ll i = 0; i< t; i++)
    {
        cin >> a[i];
    }
    ll ans = a[0] + 1;
    for (ll i = 1; i < t; i++)
    {
        ans += abs(a[i - 1] - a[i]) + 2;
    }
    cout << ans << "\n";
	return 0;
}