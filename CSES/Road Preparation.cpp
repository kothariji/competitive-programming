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
const int mod = 1e9 + 7;
const ll inf = 2e18;
 
int prims(int V, vector<vector<int>> adj[])
{
 
    vector<bool> marked(V, false);
    vector<int> dist(V, inf);
 
    dist[0] = 0;
    int u = 0;
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 0});
 
    while (!q.empty())
    {
 
        u = q.top().second;
        if (marked[u])
        {
            q.pop();
            continue;
        }
        q.pop();
        marked[u] = true;
 
        for (auto v : adj[u])
        {
            if (!marked[v[0]])
            {
                dist[v[0]] = min(dist[v[0]], v[1]);
                q.push({v[1], v[0]});
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < V; i++) {
        if(dist[i] == inf) return -1;
        else ans += dist[i];
    }
    return ans;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj[n];
    forl(i,0,m){
        int a,b,w;cin>>a>>b>>w;
        --a,--b;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    int ans =  prims(n,adj);
    if(ans == -1) cout << "IMPOSSIBLE";
    else cout << ans;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
    return 0;
}
