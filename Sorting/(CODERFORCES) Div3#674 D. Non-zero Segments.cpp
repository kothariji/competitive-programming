#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ll n, ans = 0;
	cin>>n;
	vector<ll> v(n), sum(n+1,0);
	for(ll i = 0;i<n;i++)cin>>v[i];
	map<ll,ll> m;
	m[0] ++;
	for(ll i = 0;i<n;i++){
		sum[i+1] = sum[i] + v[i];
		m[sum[i+1]]++;
		if(m[sum[i+1]] == 2){
			ans++;
			m.clear();
			m[0]++;
			sum[i+1] = v[i];
			m[sum[i+1]]++;
		}
	}
	cout<<ans<<endl;       
}