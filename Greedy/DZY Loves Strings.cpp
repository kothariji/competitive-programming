#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
 
int main() 
{
	fast;
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll w[26];
    ll m = INT_MIN;
    for (ll i = 1; i <= 26; i++)
    {
        cin >> w[i];
        m = max(m, w[i]);
    }
     ll ans = 0;
     ll j;
     for (ll i = 0; i < s.length(); i++)
     {
         ans += (w[s[i] - 'a' + 1] * (i + 1));
         j = i;
     }
      j+= 2;
     while(k--)
     {
         ans += m * j;
         j++;
     }
     cout << ans << "\n";
	return 0;
}