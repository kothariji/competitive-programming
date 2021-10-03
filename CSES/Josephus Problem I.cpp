#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include<iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
#define mod 1000000007
#define one(x) __builtin_popcountll(x)
#define pp pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
typedef long long int ll;
 
const int mxn = 2e5+10;
 
ll b[mxn];
ll a[mxn];
 
void subMain(){
    ll n;
    ll k = 1;
    cin >> n;
    oset<int>a;
    ll p = k%n;
    for(ll i = 1; i <= n; i++){
        a.insert(i);
    }
    while(a.size()){
        ll ans = *a.find_by_order(p);
        a.erase(ans);
        if(a.size()){
            p=(p+k)%a.size() ;
        }
        cout << ans << " ";
    }
}
 
int32_t main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
 
	/*ll t, i = 0;
	cin >> t;
	while(t--){
        //cout << "Case #" << i+1 << ": ";
        subMain();
        //i++;
	}*/
	subMain();
	cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
	return 0;
}