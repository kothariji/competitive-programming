#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 10000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
    ll n;
    cin >> n;
    if(n==1){
        cout << 1 << "\n";
    }
    else if(n==2){
        cout << "NO SOLUTION" << "\n";
    }
    else if(n==3){
        cout << "NO SOLUTION" << "\n";
    }
    else{
        for(int i= 1; i <= n; i++){
            if(i%2==0)
            {
                cout << i << " ";
            }
        }
        for(int i =1; i <= n; i++){
            if(i%2==1)
            {
                cout << i << " ";
            }
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