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
		ll n;cin>>n;string s;cin>>s;
		ll redeem=0;
		
		if(s=="INDIAN") redeem=200;
		else redeem=400;
		
		ll total=0;
		while(n--){
			string s1;cin>>s1;
			if(s1=="CONTEST_WON")
			{
				int x;cin>>x;
				total+=300+max(0,20-x);
				
			}
			else if(s1=="TOP_CONTRIBUTOR")
				total+=300;
			else if(s1=="CONTEST_HOSTED")
				total+=50;
			else
			{
				int x;cin>>x;total+=x;
			}
		}
		cout<<total/redeem<<endl;
	
	}
	
	
	
	
	
}
