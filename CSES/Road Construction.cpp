#include <bits/stdc++.h>
using namespace std;
#define int long long
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
 
#define forl(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define fore(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define foreach(a, b) for (auto &(a) : (b))
#define reset(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
 
const char newl = '\n';
const int N = 2e5 + 10;
const int mod = 1e9+7;
const ll inf = 2e18;
 
struct DSU {
	vector<int> e;
	DSU(int N) { e = vector<int>(N, -1); }
 
	// get representive component (uses path compression)
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
 
	bool same_set(int a, int b) { return get(a) == get(b); }
 
	int size(int x) { return -e[get(x)]; }
 
	bool unite(int x, int y) {  // union by size
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y]; e[y] = x; return true;
	}
};
 
void solve(){
    int n,m;cin>>n>>m;
    DSU dsu(n);
    int sz = n;
    int maxi =1;
    forl(i,0,m){
        int u,v;cin>>u>>v;
        --u;--v;
        if(dsu.unite(u,v)) sz--;
        maxi = max({maxi,dsu.size(u),dsu.size(v)});
        cout << sz <<" " << maxi << newl;
    }
 
 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
    return 0;
}
