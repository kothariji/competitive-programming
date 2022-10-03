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
 
vector<int> djikstra(vector<vector<pair<int, int>>> &adj, int V, int start)
{
 
    vector<int> visited(V, false);
    vector<int> dist(V, inf);
    vector<int> parent(V, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, start});
    dist[start] = 0;
    while (!q.empty())
    {
        int curr_u = q.top().second;
        q.pop();
        if (visited[curr_u])
            continue;
        visited[curr_u] = 1;
 
        for (auto &ele : adj[curr_u])
        {
            int curr_v = ele.first;
            int new_w = ele.second;
            if (!visited[curr_v] && dist[curr_u] + new_w < dist[curr_v])
            {
                dist[curr_v] = dist[curr_u] + new_w;
                parent[curr_v] = curr_u;
                q.push({dist[curr_v], curr_v});
            }
        }
    }
    return dist;
}
 
 
void solve(){
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n);
    forl(i,0,m){
        int a,b,c;cin>>a>>b>>c;
        --a,--b;
        adj[a].push_back({b,c});
    }
    vi ans = djikstra(adj,n,0);
    forl(i,0,n) cout << ans[i] << " ";
 
 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
    return 0;
}
