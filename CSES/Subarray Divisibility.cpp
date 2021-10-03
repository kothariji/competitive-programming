#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
const int mxn = 2e5;
 
void subMain(){
    ll n, sum = 0, ans = 0;
    cin >> n;
    int a[mxn];
    map<ll, ll> mp;
    mp[0]++;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum=(sum+a[i]%n+n)%n;
        ans+=mp[sum];
        mp[sum]++;
    }
    cout << ans << "\n";
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