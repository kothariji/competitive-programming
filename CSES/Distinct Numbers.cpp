#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
 
void subMain(){
    ll n;
    cin >> n;
    vector<int>a(n);
    set<int> s;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << "\n";
}
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t;
	cin >> t;
	while(t-- > 0){
	    subMain();
	}*/
	subMain(); 
	return 0;
}