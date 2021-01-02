#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 10000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
 
void subMain(){
    ll n, sum = 0, ans = 0;
    cin >> n;
    vector<int>a(n);
    for(ll i = 1; i <= n-1; i++){
        cin >> a[i];
        ans += a[i];
    }
    for(ll i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum-ans << "\n";
}
 
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t;
	cin >> t;
	while(t--){
	    subMain();
	}*/
	subMain(); 
	return 0;
}