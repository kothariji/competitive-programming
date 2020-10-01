#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;


template<class T> ostream& operator<<(ostream &os, vector<T> V){
	os << "[ ";
	for(auto v  : V) os << v << " ";
	return os << " ]";
}
template<class T> ostream& operator<<(ostream &os, set<T> V){
	os << "[ ";
	for(auto v  : V) os << v << " ";
	return os << " ]";
}
template<class T , class R > ostream& operator<<(ostream &os, map<T , R> V){
	os << "[ ";
	for(auto v  : V) os << "(" << v.first << ":" << v.second << ")";
	return os << " ]";
}
template<class T , class R > ostream& operator<<(ostream &os, pair<T , R> V){
	return os << "(" << V.first << "," << V.second << ")";
}

#define cerr cout
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template<typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cout << name << " : " << arg1 << endl;
}
template<typename Arg1, typename... Args>
void __f(const char* names , Arg1&& arg1, Args&&... args){
	const char* comma=strchr(names+1 , ','); cout.write(names, comma-names) << " : " << arg1<< " |";
	__f(comma+1, args...);
}
#else
#define trace(...) 1
#endif

#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll,ll>
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define For(i,n) for(int i = 0;i < (int)n ; ++i)
#define Rep(i,n) for(int i = 1;i <= (int)n ; ++i)
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define endl '\n'
#define pb push_back
#define I insert
#define MP make_pair

#define d0(x) cout << (x) << " "
#define d1(x) cout << (x) << endl
#define d2(x, y) cout << (x) <<" " << (y) << endl
#define d3(x,y,z) cout << (x) << " " << (y) << " " << (z) << endl


const int MAX = 1e5+5;
// vi g[MAX];

vpii edges;

pii getIn(int l, int r){

	for(int i=l;i<l+3;i++){
		for(int j = l+3;j<l+6;j++){
			if(i==l and j==l+3)continue;
			edges.pb({i , j});
		}
	}

	return {l, l+3};
}
vi X;
int getLf(int l , int r){
	for(int i=l; i<l+3;i++){
		for(int j=l+3;j<l+5;j++){
			edges.pb({i,j});
		}
	}
	edges.pb({l, l+1});
	X.pb(edges.size());
	return l+2;
}



int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cout << fixed << setprecision(25);
	int k;cin>>k;
	if(k==0){
		cout<<"6 9\n";
		cout<<"1 4\n";
		cout<<"1 5\n";
		cout<<"1 6\n";
		cout<<"2 4\n";
		cout<<"2 5\n";
		cout<<"2 6\n";
		cout<<"3 4\n";
		cout<<"3 5\n";
		cout<<"3 6\n";
		cout<<"0\n";
		return 0;
	}
	int noc = k+1;
	int nos = 5*2 + 6*(k-1);

	int l1 = getLf(1, 5);
	int l2 = getLf(6, 10);
	int prev = l1;
	for(int i=11;i<=nos;i+=6){
		int h1, h2;
		tie(h1, h2) = getIn(i, i+5);
		edges.pb({prev, h1});
		prev = h2;

	}
	edges.pb({prev, l2});
	int m = edges.size();
	cout<<nos<<" "<<m<<"\n";
	for(auto z:edges){
		cout<<z.F<<" "<<z.S<<"\n";
	}
	cout<<"2\n";
	for(auto z:X)cout<<z<<" ";
	return 0;
}
