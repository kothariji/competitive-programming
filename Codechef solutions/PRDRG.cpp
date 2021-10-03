//author:somya1209
//problem:prdrg


#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{long  int n,p=0,q,Pn_1=0;
	    cin>>n;
	  q=pow(2,n);
	  for(int i=1;i<=n;++i)
	  {
	      if(i%2==0)
	      p=2*Pn_1-1;
	      else
	      p=2*Pn_1+1;
	      Pn_1=p;
	     
	  }
	   cout<<p<<" "<<q<<" "; 
	    
	}
	return 0;
}
