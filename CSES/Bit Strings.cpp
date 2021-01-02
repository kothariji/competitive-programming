#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
 
void subMain(){
    ll n, ans = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        ans = (ans*2)%mod;
    }
    cout << ans << "\n";
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