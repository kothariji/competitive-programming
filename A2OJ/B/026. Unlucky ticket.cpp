#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
void solve()
{
   int n = 0;
   int i = 0;
   vector<int> a, b;
   string s;

   cin >> n >> s;
   for(i = 0; i < n; i++)
   {
      a.push_back(s[i] - '0');
   }
   for(i = n; i < 2 * n; i++)
   {
      b.push_back(s[i] - '0');
   }
   
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());

   i = 0;
   if(a[0] < b[0])
   {
      while(i < n && a[i] < b[i])
         i++;
      if(i < n)
      {
         cout << "NO" << endl;
         return;
      }
      else
      {
         cout << "YES" << endl;
         return;
      }
   }
   else if(a[0] > b[0])
   {
      while(i < n && a[i] > b[i])
         i++;
      if(i < n)
      {
         cout << "NO" << endl;
         return;
      }
      else
      {
         cout << "YES" << endl;
         return;
      }
   }
   else if(a[0] == b[0])
      cout << "NO" << endl;
}

int main()
{
   //for fast input output
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
   // for taking input/output from file when not running on online coding platforms
   
   #ifndef ONLINE_JUDGE// if not defined ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif   // end if
 
   solve();
 
   //to show actual running time of program  
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return EXIT_SUCCESS;
}