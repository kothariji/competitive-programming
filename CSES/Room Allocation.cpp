#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main()
{
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin.exceptions(cin.failbit);
 
  int n;
  cin >> n;
  vector<pii> e;
  rep(i, 1, n + 1)
  {
    int a, b;
    cin >> a >> b;
    e.push_back({a, i});
    e.push_back({b + 1, -i});
  }
  sort(all(e));
  int ans = 0;
  vi f, r(n + 1);
  trav(p, e)
  {
    int i = p.second;
    if (i > 0)
    {
      if (sz(f))
        r[i] = f.back(), f.pop_back();
      else
        r[i] = ++ans;
    }
    else
    {
      f.push_back(r[-i]);
    }
  }
  cout << ans << '\n';
  rep(i, 1, n + 1)
          cout
      << r[i] << " \n"[i == n];
  return 0;
}