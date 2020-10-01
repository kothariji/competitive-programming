#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
 
{
   ll t;
   cin >> t;
   while (t--)
   {
       ll n, x, y;
       cin >> n >> x >> y;
       ll red = 0;
           vector<ll> ans;
               
                   for (ll j = 1; j <=100; j++)
                {
                    for (ll i = 1; i <= 100; i++)
               {
                   for (ll k = 0; k < n; k++)
                   {
                       ans.push_back(i + (k * j));
                   }
                   if (binary_search(ans.begin(), ans.end(), x) != false && binary_search(ans.begin(), ans.end(), y) != false)
                   {
                      red = 1;
                      break;
                   }
                   else
                   {
                       ans.clear();
                   }
               }
               if (red == 1)
               {
                   break;
               }
           }
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
   }
    
   return 0;
}