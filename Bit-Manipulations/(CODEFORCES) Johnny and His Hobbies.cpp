#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
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
 
 
 
void subMain(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    for(int i = 1; i <= 1024; i++){
        vector<int> b;
        for(int j = 0; j < n; j++){
            b.push_back(i^a[j]);
        }
        sort(all(b));
        if(a==b){
            cout << i << "\n";
            return;
        }
    }
    cout << "-1" << "\n";
    return;
}
 
 
 
 
int32_t main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
 
	ll t, i = 0;
	cin >> t;
	while(t--){
        //cout << "Case #" << i+1 << ": ";
        subMain();
        //i++;
	}
	//subMain();
	return 0;
}