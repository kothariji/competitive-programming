// Solution by: Pranav Nair
// Problem Link: https://cses.fi/problemset/task/1192

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> paths;
vector<bool> visited;

void dfs(ll s){
    visited[s] = true;
    for(ll block : paths[s]){
        if(!visited[block]){
            dfs(block);
        }
    }
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;
    char box[n][m];

    for(ll i=0; i<=(n*m); i++){
        vector<ll> temp;
        paths.push_back(temp);
        visited.push_back(false);
    }

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>box[i][j];
        }
    }

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll curr = (m*i) + j + 1;
            if(box[i][j] == '.'){
                if((j+1)<m){
                    if(box[i][j+1] == '.'){
                        paths[curr].push_back(curr+1);
                        paths[curr+1].push_back(curr);
                    }
                }
                if((j-1)>=0){
                    if(box[i][j-1] == '.'){
                        paths[curr].push_back(curr-1);
                        paths[curr-1].push_back(curr);
                    }
                }
                if((i+1)<n){
                    if(box[i+1][j] == '.'){
                        paths[curr].push_back(curr+m);
                        paths[curr+m].push_back(curr);
                    }
                }
                if((i-1)>=0){
                    if(box[i-1][j] == '.'){
                        paths[curr].push_back(curr-m);
                        paths[curr-m].push_back(curr);
                    }
                }
            }
        }
    }

    ll rooms = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll curr = (m*i) + j + 1;
            if((box[i][j] == '.') && (!visited[curr])){
                rooms++;
                dfs(curr);
            }
        }
    }
    cout<<rooms;

    return 0;
}