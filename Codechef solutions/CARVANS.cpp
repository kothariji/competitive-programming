//This problem is from LEARNDSA01

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc ll t;cin>>t;while(t--)
#define lp(i,j,k) for(ll i=j;i<k;i++)
#define lpr(i,j,k) for(ll i=j;i>=k;i--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
	fast
	tc{
		ll n;cin>>n;
		vector<ll> v(n);
		lp(i,0,n)
			cin>>v[i];
		ll min=v[0],c=1;
		lp(i,1,n){
			if(v[i]<min) c+=1;
			min=std::min(min,v[i]);
			
		}
		cout<<c<<endl;
	}
	
	
	
	
	
}
