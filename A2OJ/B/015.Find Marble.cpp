#include<bits/stdc++.h>
 
 
#define ll long long
#define max 1000000000
 
 

                          
using namespace std;
 
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, s, t;
    cin >> n >> s >> t;
    ll arr[n];
    arr[0] = -1;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll index, value, ans = -1, cnt = 0;
    index = s;
    value = arr[index];
   while (cnt < n)
   {
       if (value == index && t != index)
       {
           ans = -1;
           break;
       }
       else if (t == index)
       {
           ans = cnt;
           break;
       }
       index = value;
       value = arr[index];
       cnt++;
   }
   cout << ans;
	return 0;
}