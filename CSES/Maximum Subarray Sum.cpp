#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
   ll n;
   cin >> n;
   ll arr[n];
   for(ll i = 0; i < n; i++){
        cin >> arr[i];
   }
 
   ll tempMax = arr[0];
   ll currentMax = tempMax;
 
   for (ll i = 1; i < n; i++ ) {
      currentMax = max(arr[i], currentMax+arr[i]);
      tempMax = max(tempMax, currentMax);
   }
   cout << tempMax << "\n";
 
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