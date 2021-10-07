#include <bits/stdc++.h>
#include <chrono> 
 
using namespace std;
using namespace std::chrono; 
 

 
#define f0r(a, b) for (long long a = 0; a < (b); ++a)
#define f1r(a, b, c) for (long long a = (b); a < (c); ++a)
#define f0rd(a, b) for (long long a = (b); a >= 0; --a)
#define f1rd(a, b, c) for (long long a = (b); a >= (c); --a)
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define pb push_back
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define fix(prec) {cout << setprecision(prec) << fixed;}
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define readgraph(list, edges) for (int i = 0; i < edges; i++) {int a, b; cin >> a >> b; a--; b--; list[a].pb(b); list[b].pb(a);}
#define ai(a, n) for (int ele = 0; ele < n; ele++) cin >> a[ele];
#define ain(a, lb, rb) for (int ele = lb; ele <= rb; ele++) cin >> a[ele];
#define ao(a, n) {for (int ele = 0; ele < (n); ele++) { if (ele) cout << " "; cout << a[ele]; } cout << '\n';}
#define aout(a, lb, rb) {for (int ele = (lb); ele <= (rb); ele++) { if (ele > (lb)) cout << " "; cout << a[ele]; } cout << '\n';}
#define vsz(x) ((long long) x.size())
typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
 
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.f << ", " << p.s << ")"; }
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
  cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
  cin >> p.first;
  return cin >> p.second;
}
 
mt19937 rng(steady_clock::now().time_since_epoch().count());

 
void usaco(string filename) {
 
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
 
const lld pi = 3.14159265358979323846;

 
 
ll n, m, k, q, l, r, x, y, z;
ll a[1000005];
ll b[1000005];
ll c[1000005];
string s, t;
ll ans = 0;
 
ll mat[255][255];
bool vis[255][255];
ll mr[255], mc[255];
ll cnt[255][255];
ll omat[255][255];
 
const ll dr[4] = {0, 0, -1, 1};
const ll dc[4] = {1, -1, 0, 0};
bool valid(ll r, ll c) {
  return r >= 0 && r < n && c >= 0 && c < m;
}
 
void solve(int tt) {
  cin >> n >> m;
 
  f0r(i, n) ai(mat[i], m);
  ms(vis, 0);
  ms(mr, 0);
  ms(mc, 0);
  f0r(i, n) {
    f0r(j, m) {
      --mat[i][j];
      mr[i] = max(mr[i], mat[i][j]);
      mc[j] = max(mc[j], mat[i][j]);
    }
  }
 
  ms(cnt, 0);
 
  pll pos = mp(-1, -1);
 
  f0r(i, n) f0r(j, m) omat[i][j] = -1;
 
  set<pll> safe;
 
  f0rd(i, n * m - 1) {
    bool rr = 0, rc = 0;
    f0r(j, n) {
      if (mr[j] == i) {
        rr = 1;
      }
    }
    f0r(j, m) {
      if (mc[j] == i) {
        rc = 1;
      }
    }
 
    if (rr) ++pos.f;
    if (rc) ++pos.s;
 
    pll loc = pos;
 
    if (!rr && !rc) {
      if (!safe.size()) {
        cout << -1 << '\n';
        return;
      }
      loc = *safe.begin();
      safe.erase(safe.begin());
    }
 
    omat[loc.f][loc.s] = i + 1;
    f0r(d, 4) {
      ll ni = loc.f + dr[d], nj = loc.s + dc[d];
      if (valid(ni, nj)) {
        ++cnt[ni][nj];
        if (cnt[ni][nj] == 2 && omat[ni][nj] == -1) {
          safe.insert(mp(ni, nj));
        }
      }
    }
  }
 
  f0r(i, n) ao(omat[i], m);
}
 
int main() {
  send help
 

 
  int tc = 1;
  
  for (int t = 0; t < tc; t++) solve(t);
} 