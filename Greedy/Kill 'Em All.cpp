#include<bits/stdc++.h>
 
 
#define ll long long
 
           
using namespace std;
 
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
  ll q;
  cin >> q;
  while (q--)
  {
      ll n, r;
      cin >> n >> r;
      
     
 
      set<ll> st; 
      ll maxi = -1;
      while (n--)
      {
          ll x;
          cin >> x;
          
          st.insert(x);
          
       
      }
      ll a[st.size()];
      ll in = 0;
      for (auto it = st.begin(); it!= st.end(); it++)
      {
          a[in] = *it;
          in++;
      }
      
      ll ans = 0, cnt = 0;
      for (int i = in - 1; i >= 0; i--) 
		ans += (a[i] - ans * r > 0);
     
      
      cout << ans << "\n";
  }
    	return 0;
}