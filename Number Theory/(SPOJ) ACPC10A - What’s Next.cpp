#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
 {
	while(1)
	{   
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a==0 and b==0 and c==0)
	    	break;
	    if((b-a) == (c-b))
	    	cout<<"AP"<<" "<<c+b-a<<endl;
	    else	
	    	cout<<"GP"<<" "<<c*(b/a)<<endl;
	}
	return 0;
}