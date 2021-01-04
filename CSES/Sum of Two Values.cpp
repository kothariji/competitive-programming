#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
 
void subMain(){
    ll n, x;cin >> n >> x;
    vector<int>a(n);
    map<int, int> m;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
        if(m.count(x-a[i])){
            cout << i + 1 << " " << m[x - a[i]] << "\n";
            return;
        }
        m[a[i]] = i+1;
    }
    cout << "IMPOSSIBLE" << "\n";
}
 
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t=1;
	cin >> t;
	while(t--){
        subMain();
	}*/
	subMain();
 
	return 0;
}