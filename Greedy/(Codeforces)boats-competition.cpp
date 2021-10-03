// Problem: https://codeforces.com/contest/1399/problem/C 

#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
 
int main(){
	fastio();
	
	ll t;
	cin>>t;
 
	for(ll x = 0; x<t; x++){
		ll n; 
		cin>>n;
 
		map<ll,ll> m;
 
		vector<ll> v(n);
 
		for(ll i = 0; i<n; i++){
			cin>>v[i];
			m[v[i]]++;
		}
 
		set<ll> sums;
 
		for(ll i = 0; i<n; i++){
			for(ll j = 0; j<n; j++){
				sums.insert((v[i]+v[j]));
			}
		}
 
		ll ans = 0;
 
		for(auto i: sums){
 
			map<ll,ll> mp;
			mp = m;
 
			ll c = 0;
 
			for(auto j: m){
				if(m[i-j.first] !=0){
 
					c += min(j.second,m[i-j.first]);
				}
			}
 
			ans = max(c/2,ans);
 
 
		}
 
		cout<<ans<<'\n';
 
	}
 
 
	return 0;
}