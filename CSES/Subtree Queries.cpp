/*

Problem Name : Subtree Queries
Problem Link : https://cses.fi/problemset/task/1137/

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef vector<int> vi;
typedef vector<vi> vvi;

const char newl = '\n';
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

vi start, endd;
vvi adj;

struct SegmentTree{
    int n;
    vector<int> t;

    SegmentTree(int n, vector<int> v){
        this->n = n;
        t.resize(2 * n);

        for (int i = n; i < 2 * n; i++){
            t[start[i - n] + n] = v[i - n];
        }
    }

    void build(){
        for (int i = n - 1; i > 0; --i)
            t[i] = t[2 * i] + t[2 * i + 1];
    }

    void modify(int p, int value){
        for (t[p += n] = value; p > 1; p /= 2)
            t[p / 2] = t[p] + t[p ^ 1];
    }

    int query(int l, int r){
        int res = 0;
        for (l += n, r += n; l < r; l /= 2, r /= 2){
            if (l & 1)
                res += t[l++];
            if (r & 1)
                res += t[--r];
        }
        return res;
    }
};

void dfs(vvi &adj, int u, int &s){

    start[u] = s++;
    for (auto &v : adj[u]){
        if (start[v] == -1)
            dfs(adj, v, s);
    }
    endd[u] = s - 1;
}

void solve(){

    int n, q;
    cin >> n >> q;
    vi v(n);
    adj.resize(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        --a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    start.resize(n, -1);
    endd.resize(n, -1);
    int s = 0;
    dfs(adj, 0, s);

    SegmentTree S(n, v);
    S.build();

    while (q--){
        int x;
        cin >> x;
        if (x == 1){
            int a, b;
            cin >> a >> b;
            S.modify(start[a - 1], b);
        } else {
            int a;
            cin >> a;
            cout << S.query(start[a - 1], endd[a - 1] + 1) << newl;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}
