// Solution by: Pranav Nair
// Problem Link: https://cses.fi/problemset/task/1193

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> paths;
vector<bool> visited;
vector<ll> dist;
vector<ll> parent;

bool traversable(char c){
    if((c=='.') || (c=='A') || (c=='B')) return true;
    else return false;
}

void bfs(ll s){
    queue<ll> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;
    parent[s] = 0;
    while(!q.empty()){
        ll curr = q.front();
        q.pop();
        for(ll step : paths[curr]){
            if(!visited[step]){
                q.push(step);
                visited[step] = true;
                dist[step] = dist[curr] + 1;
                parent[step] = curr;
            }
        }
    }
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;

    ll a=0;
    ll b=0;

    char room[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>room[i][j];
            if(room[i][j] == 'A'){
                a = (m*i) + j + 1;
            }
            else if(room[i][j] == 'B'){
                b = (m*i) + j + 1;
            }
        }
    }

    for(ll i=0; i<=(n*m); i++){
        vector<ll> temp;
        paths.push_back(temp);
        visited.push_back(false);
        dist.push_back(-1);
        parent.push_back(-1);
    }

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll curr = (m*i) + j + 1;
            if(traversable(room[i][j])){
                if((i+1)<n){
                    if(traversable(room[i+1][j])){
                        paths[curr].push_back(curr+m);
                        paths[curr+m].push_back(curr);
                    }
                }
                if((i-1)>=0){
                    if(traversable(room[i-1][j])){
                        paths[curr].push_back(curr-m);
                        paths[curr-m].push_back(curr);
                    }
                }
                if((j+1)<m){
                    if(traversable(room[i][j+1])){
                        paths[curr].push_back(curr+1);
                        paths[curr+1].push_back(curr);
                    }
                }
                if((j-1)>=0){
                    if(traversable(room[i][j-1])){
                        paths[curr].push_back(curr-1);
                        paths[curr-1].push_back(curr);
                    }
                }
            }
        }
    }

    bfs(a);
    if(dist[b] == -1){
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES\n";
        vector<ll> path;
        ll curr = b;
        while(curr != 0){
            path.push_back(curr);
            curr = parent[curr];
        }
        reverse(path.begin(), path.end());
        cout<<dist[b]<<"\n";
        for(ll i=1; i<path.size(); i++){
            ll curr = path[i];
            ll prev = path[i-1];
            if(curr == (prev+1)) cout<<"R";
            else if(curr == (prev-1)) cout<<"L";
            else if(curr == (prev+m)) cout<<"D";
            else if(curr == (prev-m)) cout<<"U";
        }
    }
    return 0;
}