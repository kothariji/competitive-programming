//Problem link : https://www.codechef.com/START14B/problems/BININVER

#include<bits/stdc++.h>
using namespace std;


#define int             long long


//Function thet returns minimum number of operations required to make a number odd

int operations(int g) {
     int ans = 0;

     while (g % 2 == 0) {
          ans++;
          g /= 2;
     }
     return ans;

}

int32_t main()
{
     int t;
     cin>>t;

     while(t--) {

          int n;
          cin >> n;
          int arr[n];

          //For the gcd to be odd, atleast one number should be odd
          //To minimize the number of operations, we need to select such an index such that the number of operations required is minimum.

          int g = arr[0];
          int ans = mod;
          for (int i = 0; i < n; i++) {
               cin >> arr[i];
               ans = min(ans, operations(arr[i]));
          }


          cout << ans << endl;

     }
     return 0;
}
