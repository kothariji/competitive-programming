#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
 {
	while(1)
	{   
	    lli n;
	    cin>>n;
	    if(n == -1)
	    	break;
	    lli a[n],sum = 0;
	    
	    for(lli i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    	sum += a[i];
	    }
	    if(sum%n != 0)
	    	cout<<"-1"<<endl;
	    else
	    {
	    	lli avg = sum/n;
	    	lli ans = 0;
	    	for(lli i=0;i<n;i++)
		    {
		    	if(a[i] > avg)
		    	ans += (a[i]-avg);
		    }
	    	cout<<ans<<endl;
	    }
	}
	return 0;
}