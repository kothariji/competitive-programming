#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	lli t;
	cin>>t;
	while(t--)
	{
		 ios_base::sync_with_stdio(false); 
    		cin.tie(NULL);
    		
    	lli n,k,x,sum=0,ans=0,flag=0;
    	cin>>n>>k;
    	
    	for(lli i=0;i<n;i++)
    	{
    		cin>>x;
    		sum+=x;
    		sum-=k;
    		if(sum<0 && flag==0)
    		{
    			flag=1;
    			cout<<i+1<<endl;
    			
			}
			ans++;
		}
		if(flag==0)
		{
			ans=ans+(sum/k)+1;
			cout<<ans<<endl;
		}
	}		
	
	
return 0;	
}
