#pragma GCC optimize ("O2,O3,Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;

struct Node {
  int x, y, z;
};

const int N = (int)5e5 + 5;

int n, k, m, a[N], fa[N], lim[N], used[N], cnt[N], pre[N];
vector<Node> v;

int find(int x) {
  return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void init() {
  cin >> n >> k >> m;
  v.clear();
  fa[0] = 1;
  fa[n + 1] = n + 1;
  for(int i = 1 ; i <= n ; ++i) {
    pre[i] = 0;
    cnt[i] = 0;
    used[i] = 0;
    lim[i] = 0;
    a[i] = -1;
    fa[i] = i;
  }
  for(int i = 0 ; i < m ; ++i) {
    int x, y, z; cin >> x >> y >> z;
    v.push_back({x, y, z});
  }
  sort(v.begin(), v.end(), [&](Node x, Node y) { return x.z < y.z; });
}
bool solve() {
  for(auto i : v) {
    if(a[i.z] != -1 || i.y > i.z) return false;
    a[i.z] = i.x; fa[i.z] = fa[i.z + 1];
    i.y -= cnt[i.x];
    if(i.y < 1) return false;
    cnt[i.x] += i.y; lim[i.z] = i.x;
    int tt = i.z;
    i.z = pre[i.x];
    while(i.y > 1) {
      i.z = find(i.z);
//      cerr << pre[i.x] << ' ' << i.z << '\n';
      if(i.z >= tt) break;
      a[i.z] = i.x; fa[i.z] = fa[i.z + 1]; i.y--;
    }
    pre[i.x] = tt;
    if(i.y > 1) return false;
  }
  int now = 1;
  for(int i = n ; i >= 1 ; --i) {
    if(a[i] == -1) {
      while(used[now] && now <= k) now++;
      if(now > k) return false;
      a[i] = now;
    }
    else if(lim[i] > 0) {
      used[lim[i]] = 1;
    }
  }
  cout << "Yes\n";
  for(int i = 1 ; i <= n ; ++i) cout << a[i] << " \n"[i == n];
  return true;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int t; cin >> t;
  while(t--) {
    init();
    if(!solve()) cout << "No\n";
  }
}
