#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define one(x) __builtin_popcountll(x)
#define pp pair<ll,ll>
#define all(x) (x).begin(), (x).end()
typedef long long int ll;
 
 
const int mxn = 2e5+10;
const int MAX_CHAR = 26;
ll a[mxn];
 
void subMain(){
    ll n, ans = 0;
    cin >> n;
    while(n>=5){
        ans += n/5;
        n /= 5;
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