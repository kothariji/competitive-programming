#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n,k;
   cin >> n >> k;
   int w[n];
   for (int i = 0; i < n; i++) 
      cin >> w[i];
   sort(w,w+n);
   int l = 0, r = n-1;
   int ans = 0;
   while (l <= r) {
      if (w[l]+w[r] < k+1) l++;
      r--;
      ans++;
   }
   cout << ans << endl;
   return 0;
}