#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 10000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
    ll n;
    cin >> n;
    cout << n << " ";
    while(n!=1){
        if(n%2==0){
            n /= 2;
            cout << n << " ";
        }
        else{
            n *= 3;
            n += 1;
            cout << n << " ";
        }
    }
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