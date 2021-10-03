#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s; cin>>s;
	    int sum=0;
	    for(char ch : s){
	        if(ch-48) sum+=b;
	        else    sum+=a;
	    }
	    cout<<sum;
	    cout<<"\n";
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
