#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;


int main() 
{
	fast;
   ll t;
   cin >> t;
   deque<ll> a, b;
   ll x;
   for (ll i = 0; i < t; i++)
   {
       cin >> x;
       a.push_back(x);
   }
   for (ll i = 0; i < t; i++)
   {
       cin >> x;
       b.push_back(x);
   }
   sort(a.rbegin(), a.rend());
   sort(b.rbegin(), b.rend());
   auto it = a.begin();
   auto it2 = b.begin();
   ll A = 0, B = 0;
   ll flag = 0;
   while (a.size() != 0 && b.size() != 0)
   {
       if (flag == 0)
       {
       if (*it < *it2)
       {
           b.pop_front();
           it2 = b.begin();
       }
       else
       {
           A += *(a.begin());
           a.pop_front();
           it = a.begin();
       }
       flag = 1;
       }
       else
       {
           if (*it > *it2)
       {
           a.pop_front();
           it = a.begin();
       }
       else
       {
           B += *(b.begin());
           b.pop_front();
           it2 = b.begin();
       }
       flag = 0;
       }
   }
   if (a.size() != 0)
   {
       while (a.size() != 0)
   {
       if (flag == 0)
       {
       
           A += *(a.begin());
           a.pop_front();
           it = a.begin();
       
       flag = 1;
       }
       else
       {
          
           a.pop_front();
           it = a.begin();
           flag = 0;
       }
       
   }
   }
   else if (b.size() != 0)
   {
       while (b.size() != 0)
   {
       if (flag == 0)
       {
       
          
           b.pop_front();
           it2 = b.begin();
       
       flag = 1;
       }
       else
       {
          B += *(b.begin());
           b.pop_front();
           it2 = b.begin();
           flag = 0;
       }
       
   }
   }
   cout << A - B << "\n";
   
	return 0;
}