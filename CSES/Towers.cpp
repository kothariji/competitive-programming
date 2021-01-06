#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
 
void subMain(){
    ll n;
    cin >> n;
    vector<int> v;
    for(ll i = 0; i < n; i++){
        ll a;
        cin >> a;
        int p=upper_bound(v.begin(), v.end(), a)-v.begin();
        if(p<v.size())
        {
            v[p]=a;
        }
        else
        {
            v.push_back(a);
        }
    }
    cout << v.size();
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