// ******* author - anonymous377 *******
#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n ; cin>>n;
	    int e=0,o=0;
	    for(int i=0;i<n;i++){
	        int a; cin>>a;
	        if(a%2) o++;
	        else    e++;
	    }
	    int ans = 2*min(e,o);
	    if(e>o){
	        ans+=(e-o+1)/2;
	    }
	    else if(o>e){
	        ans += (o-e)/2;
	    }
	    cout<<ans;
	    cout<<"\n";
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
