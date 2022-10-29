  #include <bits/stdc++.h>
  #include <stdio.h>
  #include <algorithm>
  #define int long long int
  #define INF 1e14
  #define pb(n) emplace_back(n)
  #define yes "YES"
  #define no "NO"
  #define all(x) x.begin(), x.end()
  using namespace std;
  const unsigned long long M = 1000000007;

  const char nl = '\n';
  const char sp = ' ';

  void solve() {

    string a, b;
    cin >> a >> b;
    if (a[a.size() - 1] == b[b.size() - 1]) {
      if (a.size() == b.size()) {
        cout << "=" << nl;
      } else if (a[a.size() - 1] == 'S') {
        if (a.size() < b.size()) {
          cout << ">" << nl;
        } else cout << '<' << nl;

      } else {
        if (a.size() < b.size()) cout << "<" << nl;
        else cout << ">" << nl;

      }

    } else {
      if (a[a.size() - 1] < b[b.size() - 1]) cout << '>' << nl;
      else cout << '<' << nl;
    }

  }

  int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
      //cout << "Case #" << tc << ": ";
      solve();
    }

    return 0;

  }