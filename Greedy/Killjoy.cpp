#include<bits/stdc++.h>
 
#define ll long long
 
 
using namespace std;
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   ll t;
   cin >> t;
   while (t--)
   {
       ll n, x;
       cin >> n >> x;
       ll arr[n];
       ll flag = 0;
       ll cnt = 0;
       for (ll i = 0; i < n; i++)
       {
           cin >>arr[i];
           if (arr[i] == x)
           {
               flag = 1;
               cnt++;
           }
       }
       if (cnt == n)
       {
           cout << 0 << "\n";
           continue;
       }
       if (flag == 1)
       {
           cout << 1 << "\n";
           continue;
       }
       ll sum = 0;
       for (ll i = 0; i < n; i++)
       {
           sum += (arr[i] - x);
       }
       if (sum == 0)
       {
           cout << 1 << '\n';
       }
       else
       {
           cout << 2 << '\n';
       }
       
       
   }
    return 0;
}