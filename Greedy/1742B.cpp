  #include <bits/stdc++.h>
  #include <stdio.h>
  #include <algorithm>
  #define int long long int
  #define INF 1e14
  #define pb(n) emplace_back(n)
  #define yes "YES"
  #define no "NO"
  using namespace std;
  const unsigned long long M = 1000000007;

  const char nl    = '\n';
  const char sp = ' ';

  void solve()
  {
    int n;
    cin>>n;
    int x;
    set<int> se;
    for(int i=0;i<n;i++){
      cin>>x;
      se.insert(x);
    } 
    if(se.size() == n) cout<<yes<<nl;
    else cout<<no<<nl;

     
  }

  int32_t main()
  {
    
    ios::sync_with_stdio(false); 
      cin.tie(NULL); cout.tie(NULL);
    int T=1; 
    cin >> T;

      for(int tc = 1; tc <= T; tc++)
      {
          //cout << "Case #" << tc << ": ";
          solve();
      }
    
    return 0;
    
  }