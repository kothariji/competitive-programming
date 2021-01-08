#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
typedef long long ll;
const int mxn = 5e3;
 
 
void subMain(){
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    for(ll i = 0; i < n-2; i++){
        ll l = i+1;
        ll r = n-1;
        while(l<r){
            if(a[i].first + a[l].first + a[r].first==x){
                cout << a[i].second+1 << " " << a[l].second+1 << " " << a[r].second+1 << "\n";
                return;
            }
            else if(a[i].first + a[l].first + a[r].first>x){
                r--;
            }
            else{
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << "\n";
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