//This problem is from LEARNDSA01

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc ll t;cin>>t;while(t--)
#define lp(i,j,k) for(ll i=j;i<k;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
	fast
	
	tc{
		ll k,d0,d1;cin>>k>>d0>>d1;
		ll sum=d0+d1;int c=2;
		
			sum=d0+d1;c=2;int d;
			while(c<=k){
				d=sum%10;
				
				if(d==6||d==0)
				{
					break;
				}
				sum+=d;
				c+=1;
			}
			ll res;
			if(k==2){
				res=d0+d1;
			}
			if(d==0){
				res=sum;
			}
			else{
				res=sum+20*((k-c)/4);
				if((k-c)%4==1) res+=6;
				else if((k-c)%4==2) res+=8;
				else if((k-c)%4==3) res+=12;
				else res+=0;
			}
			
			
			if(res%3!=0) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		
	}
		
	
	
}
