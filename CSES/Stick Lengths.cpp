#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
 
void subMain(){
    ll n, mid, ans = 0;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    mid = (n/2);
    for(ll i = 0; i < n; i++){
        ans += abs(a[mid]-a[i]);
    }
    cout << ans << "\n";
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