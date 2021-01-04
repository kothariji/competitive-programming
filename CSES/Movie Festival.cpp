#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;
 
 
void subMain(){
    vector<pair<ll,ll>> v;
       ll n;
       cin>>n;
       for(ll i=0;i<n;i++){
          ll a,c;
          cin>>a>>c;
          v.push_back({c,a});
       }
       sort(v.begin(),v.end());
       ll curr=v[0].first;
       ll ans=1;
       for(ll i=1;i<n;i++){
           if(v[i].second>=curr){
            curr=v[i].first;
            ans++;
           }
       }
       cout<<ans<<"\n";
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