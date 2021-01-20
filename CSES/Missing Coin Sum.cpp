#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 

#define pp pair<ll,ll>
#define all(x) (x).begin(), (x).end()
typedef long long int ll;
 
const int mxn = 2e5+10;
 
ll b[mxn];
ll a[mxn];
 
void subMain(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    ll cnt = 1;
    for(ll i = 0; i < n && a[i] <= cnt; i++){
        cnt += a[i];
    }
    cout << cnt << "\n";
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
}