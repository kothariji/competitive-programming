
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int  n;
	    cin>>n;
	    if(n==1){
	        cout<<"1"<<endl;
	        continue;
	    }
	    long long int  ans=1;
	    while(ans*2<=n){
	        ans*=2;
	    }
	    long long int a=n-ans+1;
	    if(ans==n)
	        cout<<ans/2<<endl;
	    else 
	        cout<<max(a,ans/2)<<endl;
	}
	return 0;
}
