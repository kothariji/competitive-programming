#include <iostream>
using namespace std;

int main() {
	long long int t,n,v;
	cin>>t;
	while(t--)
	{
	    cin>>n>>v;
	    long long int max=0,min=0;
	    max= (n*(n-1))/2;
	    if(v==1)
	    min=max;
	    else
	    {
	        if(v>=n-1)
	        min=n-1;
	        else
	        min = v+((n-v)*(n-v+1))/2 -1;
	    }
	    cout<<max<<" "<<min<<endl;
	}
	return 0;
}
