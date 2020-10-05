#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    unsigned long long int n,m,gcd;
	    cin>>n>>m;
	    if(abs(n-m)==1){
	        unsigned long long int r = n*m;
	        cout<<r<<endl;
	    }
	    
	    else{
	         for(int i=1; i<= n && i<=m; i++){
	      if(n%i==0 && m%i==0)
	      gcd=i;
	  }
	   unsigned long long int lcm=(n*m)/gcd;
	    cout<<lcm<<endl;
	    }
	   
	 
	}
	return 0;
}
