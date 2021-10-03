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
        ll n;
        cin >> n;
        
        string s;
        cin >>s;
      if (n == 1)
      {
          if ((s[0] - '0') % 2 == 0)
          {
              cout << 2 << "\n";
          }
          else
          {
              cout << 1 << "\n";
          }
          continue;
      }
        ll even = 0;
        ll odd = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    even++;
                }
                
            }
            else
            {
                if ((s[i] - '0') % 2 != 0)
                {
                    odd++;
                }
            }
        }
       ll x = s.length();
       if (x % 2 == 0)
       {
           if (odd < x / 2)
           {
               cout << 2 << "\n";
           }
           else
           {
               cout << 1 << "\n";
           }
       }
       else
       {
           if (even <= ((x / 2)) )
           {
               cout << 1 << "\n";
           }
           else
           {
               cout << 2 << "\n";
           }
       }
    }
    return 0;
}