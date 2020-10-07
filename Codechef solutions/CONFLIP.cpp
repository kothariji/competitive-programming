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
		int g;cin>>g;
		while(g--){
			ll i,n,q;cin>>i>>n>>q;
			if(i==q){
				cout<<n/2<<endl;
			}
			else{
				cout<<(n/2)+(n%2)<<endl;
			}
		}
	
	}
	
	
	
	
	
}
