//author : Avishkar A. Hande

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const int maxS = 1e5+10;
vector<pair<ll, ll>> adj[maxS]; // represents adjacency list to store weight and destination node as a pair
vector<ll> dist(maxS, 1e9); // distance array initialised assuming 1e9 as infinity

void dijkstra(ll source){
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
	pq.push({0, source}); // pair of distance and node 
	dist[source] = 0;	// source node has 0 distance
	while(!pq.empty()){
		pair<ll, ll> top = pq.top();
		pq.pop();
		for(pair<ll, ll> child: adj[top.second]){
			if(dist[top.second] + child.first < dist[child.second]){
				dist[child.second] = dist[top.second] + child.first;
				pq.push(child);
			}
		}
	}
}


int main()
{
	ll nodes, edges;
	cin >> nodes >> edges;
	while(edges--){
		ll from, to, weight;
		cin >> from >> to >> weight;
		adj[from].push_back({weight, to});
		adj[to].push_back({weight, from});
	}
	dijkstra(1); // replace 1 with source node.
	for(int i = 0; i < nodes; i++){
		cout << dist[i] << " ";
	}cout << endl;

}