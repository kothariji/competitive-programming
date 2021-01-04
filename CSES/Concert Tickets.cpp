#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
    ll n, m, h, t;
    cin >> n >> m;
    multiset<int, greater<int>> a;
    while(n--){
        cin >> h;
        a.insert(h);
    }
    while(m--){
        cin >> t;
        auto it = a.lower_bound(t);
        if(it==a.end())
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << *it << "\n";
            a.erase(it);
        }
    }
 
}
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t=1;
	cin >> t;
	while(t--){
 
	}*/
	subMain();
	return 0;
}