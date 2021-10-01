// Author : Avishkar A. Hande

#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxS = 1e5+10;
vector<pair<ll, ll>> adj[maxS];

template <typename T>
class DisjointSet{
public:
    vector<T> parent;
    DisjointSet(T n){
        parent.resize(n+1);
        for(T i = 0; i <= n; i++) parent[i] = i;
    }
    T find(T a){
        if(parent[a] == a) return a;
        return parent[a] = find(parent[a]);
    }
    void join(T a, T b){
        if(find(a) == find(b)) return;
        parent[find(a)] = find(b);
        return ;
    }
};


// this function stores the MST in adjacency list
// Note : It does not store the original graph

void kruskal(ll n, vector<vector<ll>> &edges){
    sort(edges.begin(), edges.end());
    DisjointSet<ll> d(n+1);
    for(int i = 0; i < edges.size(); i++){
        if(d.find(edges[i][1])!=d.find(edges[i][2])){
            d.join(d.find(edges[i][1]), d.find(edges[i][2]));
            adj[edges[i][1]].push_back({edges[i][2],edges[i][0]});
            adj[edges[i][2]].push_back({edges[i][1],edges[i][0]});
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll nodes, edges;
    cin >> nodes >> edges;
    vector<vector<ll>> edgesv;
    for(int i = 0; i < edges; i++){
        ll v1, v2, w;
        cin >> v1 >> v2 >> w;
        edgesv.push_back({w, v1, v2});
    }
    kruskal(nodes, edgesv);
    for(int i = 1; i <= nodes; i++){
        for(pair<ll, ll> p : adj[i]){
            cout << i << " " << p.first << " " << p.second << endl;
        }
    }
}


