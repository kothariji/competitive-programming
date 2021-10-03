// Solution by: Pranav Nair
// Problem Link: https://cses.fi/problemset/task/1667

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> paths;
vector<bool> visited;
vector<ll> dist;
vector<ll> parent;

void bfs(ll s){
    queue<ll> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;
    parent[s] = 0;
    while(!q.empty()){
        ll curr = q.front();
        q.pop();
        for(ll computer : paths[curr]){
            if(!visited[computer]){
                q.push(computer);
                visited[computer] = true;
                dist[computer] = dist[curr] + 1;
                parent[computer] = curr;
            }
        }
    }
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;

    for(ll i=0; i<=n; i++){
        vector<ll> temp;
        paths.push_back(temp);
        visited.push_back(false);
        dist.push_back(-1);
        parent.push_back(-1);
    }

    for(ll i=0; i<m; i++){
        ll a=0;
        ll b=0;
        cin>>a>>b;
        paths[a].push_back(b);
        paths[b].push_back(a);
    }

    bfs(1);

    if(dist[n] == -1){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    else{
        vector<ll> route;
        ll curr = n;
        while(curr != 0){
            route.push_back(curr);
            curr = parent[curr];
        }
        reverse(route.begin(), route.end());
        cout<<dist[n]+1<<"\n";
        for(ll computer : route){
            cout<<computer<<" ";
        }
    }
    return 0;
}