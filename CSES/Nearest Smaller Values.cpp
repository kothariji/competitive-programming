#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<pair<int, int>> st;
  st.emplace_back(0, 0);
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    while (st.back().first >= x) st.pop_back();
    cout << st.back().second << ' ';
    st.emplace_back(x, i);
  }
  cout << endl;
}