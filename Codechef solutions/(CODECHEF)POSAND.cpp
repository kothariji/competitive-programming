/*
    Author:- Akash
*/
    #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,f=0;
	    cin>>n;
	    if(n==1)
	        {cout<<1<<endl;continue;}
	    else if(n==3)
	        {cout<<1<<" "<<3<<" "<<2<<endl;
	        continue;}
	    k=n;
	    while(k>0) {
	        if(k!=1&&k%2!=0){
	            f=1;
	            break;
	        }
	        k/=2;
	    }
	    if(f==0)
	        cout<<-1;
	    else{
	    
	       cout<<2<<" "<<3<<" "<<1<<" ";
	       int x=4,i;
	       for(i=4;i<=n;i++)
	       {
	           if(i==x){
	               cout<<x+1<<" "<<x<<" ";
	               i++;
	               x*=2;
	               
	           }
	           else
	           cout<<i<<" ";
	       }
	       
	   }
	    cout<<endl;
	}
	return 0;
}
