//author : Avishkar A. Hande
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxS = 1e5+10;
vector<ll> adj[maxS];

ll LOG;
int timer;
vector<int> tin, tout;
vector<vector<int>> up;

/*
    Binary Lifting is mostly used to find Lowest Common Ancestor
    as it reduces the time complexity to log(n);
*/

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= LOG; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : adj[v]) {
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = LOG; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root, int n) {
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    LOG = ceil(log2(n)) + 1;
    up.assign(n+1, vector<int>(LOG + 1));
    dfs(root, root);
}

int main()
{
	ll node, queries;
	cin >> node >> queries;
	for(int i = 0; i < node-1; i++){
		ll u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
    preprocess(1, node);
    while(queries--){
        ll a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
}