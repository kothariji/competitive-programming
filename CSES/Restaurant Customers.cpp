#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
    ll n, x, y;
    cin >> n;
    vector<pair<int, bool>> v;
    for(ll i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, true));
        v.push_back(make_pair(y, false));
    }
    sort(all(v));
    int ans = 0, cnt = 0;
    for(ll i = 0; i < v.size(); i++){
        if(v[i].second==true)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt--;
        }
    }
    cout << ans << "\n";
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