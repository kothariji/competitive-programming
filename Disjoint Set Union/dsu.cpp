// Author : Avishkar A. Hande
#include<bits/stdc++.h>
using namespace std;

// Disjoint Set is used to merge/join two sets
// traditionally this can be done in n^2 time
// but using DSU We can do it in nlogn time.

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

int main()
{
	DisjointSet<ll> d(1);
	return 0;
}