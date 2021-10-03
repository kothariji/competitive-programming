#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
#define maxn 1000000
 
 
void subMain(){
    ll a, b;
    cin >> a >> b;
    if(a<b){
        swap(a, b);
    }
    if(a>2*b){
        cout << "NO" << "\n";
    }
    else if((a+b)%3==0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
 
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	ll t;
	cin >> t;
	while(t-- > 0){
	    subMain();
	}
	//subMain();
	return 0;
}