// Solution by: Pranav Nair
// Problem Link: https://cses.fi/problemset/task/1668

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<ll>> friendships;
vector<bool> visited;
vector<ll> team;

bool dfs(int s, int t){
    visited[s] = true;
    team[s] = t;
    for(ll f : friendships[s]){
        if(!visited[f]){
            if(dfs(f, abs(1 - t)) == false){
                return false;
            }
        }
        else if(team[f] == t){
            return false;
        }
    }
    return true;
}

int main(){
    ll n=0;
    ll m=0;
    cin>>n>>m;

    for(ll i=0; i<=n; i++){
        vector<ll> temp;
        friendships.push_back(temp);
        visited.push_back(false);
        team.push_back(-1);
    }

    for(ll i=0; i<m; i++){
        ll a=0;
        ll b=0;
        cin>>a>>b;
        friendships[a].push_back(b);
        friendships[b].push_back(a);
    }

    for(ll i=1; i<=n; i++){
        if(!visited[i]){
            if(dfs(i, 0) == false){
                cout<<"IMPOSSIBLE";
                return 0;
            }
        }
    }

    for(ll i=1; i<=n; i++){
        cout<<(team[i] + 1)<<" ";
    }
    
    return 0;
}