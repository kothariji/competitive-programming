// Solution by: Pranav Nair
// Problem Link: https://cses.fi/problemset/task/1669

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> paths;
vector<bool> visited;
vector<ll> parent;
vector<ll> color;

ll cycle_start = 0;
ll cycle_end = 0;

bool dfs(ll s, ll p){
    visited[s] = true;
    color[s] = 1;
    parent[s] = p;
    for(ll city : paths[s]){
        if(city == p){
            continue;
        }
        if(!visited[city]){
            if(dfs(city, s)){
                return true;
            }
        }
        if(color[city] == 1){
            cycle_end = s;
            cycle_start = city;
            return true;
        }
    }
    color[s] = 2;
    return false;
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;

    for(ll i=0; i<=n; i++){
        vector<ll> temp;
        paths.push_back(temp);
        visited.push_back(false);
        parent.push_back(-1);
        color.push_back(0);
    }

    for(ll i=0; i<m; i++){
        ll a=0;
        ll b=0;
        cin>>a>>b;
        paths[a].push_back(b);
        paths[b].push_back(a);
    }

    for(ll i=1; i<=n; i++){
        if(!visited[i]){
            if(dfs(i, 0)){
                break;
            }
        }
    }

    if(cycle_start == 0 && cycle_end == 0){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<ll> route;
    route.push_back(cycle_start);
    ll curr = cycle_end;
    while(curr != cycle_start){
        route.push_back(curr);
        curr = parent[curr];
    }
    route.push_back(cycle_start);

    cout<<route.size()<<"\n";
    for(ll city : route){
        cout<<city<<" ";
    }
    return 0;
}