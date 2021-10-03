#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
using namespace std;

#define mod 1000000007
#define one(x) __builtin_popcountll(x)
#define pp pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
typedef long long int ll;




void subMain(){
    ll n,a,b;cin>>n>>a>>b;
   	ll ar[n],presum[n];
   	for(int i=0;i<n;++i)
   	{
   		cin>>ar[i];
	}
	presum[0]=ar[0];
	for(int i=1;i<n;++i)
	{
		presum[i]=presum[i-1]+ar[i];
	}
	multiset<ll>s;
	s.insert(0);
	ll ans=-9e18;
	ans=max(ans,presum[a-1]);
	int flag=0;
	for(int i=a;i<n;++i)
	{
		if(i-b>=0)
		{
			if(!flag)
			{
				auto it=s.find(0);
				s.erase(it);
				flag=1;
			}
		}
		if(i-a>=0)
		{
			s.insert(presum[i-a]);
		}
		ans=max(ans,presum[i]-*s.begin());
		if(i-b>=0)
		{
			auto it=s.find(presum[i-b]);
			s.erase(it);
		}
	}
	cout<<ans<<endl;
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
}
