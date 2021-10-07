#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 
  int t;
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    int n;
    cin >> n;
    ll a[n+1];
 
    int f = 0;
    ll sum = 0;
    for (int i = 1; i < n+1; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i < n+1; i++)
    {
      sum = sum + a[i];
      ll need = (i * (i - 1)) / 2;
      if (sum < need)
      {
        f = 1;
        break;
      }
    }
    if (f)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }
#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
  return 0;
}