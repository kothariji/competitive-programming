#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[n];
	    int sum=0,ans=0;
	    for(int i=0;i<n;i++){
	       cin>>a[i];
	       sum+=a[i];
	       if(i==m-1&sum==m) ans=k;
	    }
	    if(sum==n) ans=100;
	    cout<<ans<<endl;
	}
	return 0;
}
