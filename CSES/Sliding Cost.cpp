#include <iostream>
#include <set>
using namespace std;
using ll = long long;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  int x[n];
  for (int i = 0; i < n; ++i) cin >> x[i];
  multiset<int> a, b;
  ll asum = 0, bsum = 0;
  for (int i = 0; i < n; ++i) {
    if (i >= k) {
      if (x[i - k] <= *a.rbegin()) {
        asum -= x[i - k];
        a.erase(a.find(x[i - k]));
      } else {
        bsum -= x[i - k];
        b.erase(b.find(x[i - k]));
      }
    }
    if (b.empty() || x[i] <= *b.begin()) {
      asum += x[i];
      a.insert(x[i]);
    } else {
      bsum += x[i];
      b.insert(x[i]);
    }
    while (a.size() > b.size()) {
      auto it = prev(a.end());
      b.insert(*it);
      bsum += *it;
      asum -= *it;
      a.erase(it);
    }
    while (a.size() < b.size()) {
      auto it = b.begin();
      a.insert(*it);
      asum += *it;
      bsum -= *it;
      b.erase(it);
    }
    if (i >= k - 1) {
      ll med;
      if (k % 2) med = *a.rbegin() * 2;
      else med = *a.rbegin() + *b.begin();
      ll cost = med * a.size() - asum * 2 + bsum * 2 - med * b.size();
      cout << cost / 2 << ' ';
    }
  }
  cout << '\n';
}