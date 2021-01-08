#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main() {
  ll n, x, m = 0, s = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    m = max(m, x);
    s += x;
  }
  cout << (m > (s - m) ? 2 * m : s) << endl;
}