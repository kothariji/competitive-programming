#include <iostream>
using namespace std;
 
int main() {
    int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    int sum=0,rem=0;
	    cin>>n;
	    while(n>0){
	    sum=sum*10;
	    rem=n%10;
	    sum=sum+rem;
	    n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
