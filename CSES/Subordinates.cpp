/*

Problem Name : Subordinates
Problem Link : https://cses.fi/problemset/task/1674/

*/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

const char newl = '\n';
const int N = 2e5 + 10;
const int mod = 1e9+7;

int dfs(vvi &child, vi &child_size,int u = 0){

    for(int v:child[u]){
        child_size[u] += (dfs(child,child_size,v)+1);
    }
    return child_size[u];

}
void solve(){

    int n; cin>>n;
    vvi child(n);

    for(int i = 1; i < n; i++){
        int parent;
        cin >> parent;
        child[parent-1].push_back(i);
    }

    vi child_size(n);
    dfs(child,child_size);
    for(int ele: child_size) cout << ele << " ";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
