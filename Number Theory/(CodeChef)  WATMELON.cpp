/********************************************
********* Code By Sweta**********************
********************************************/


#include <iostream>
using namespace std;
void eval(){
     int n;
	    cin>>n;
	    int ar[n];
	    bool k[n];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        k[i]=true;
	    }
	   for(int i=0;i<n;i++){
	       if(ar[i]!=i+1){
	           for(int j=1;j<=(i+1);j++){
	               if((i+1)%j==0 && j%j==0){
	                  if(j==ar[i]){
	                      k[i]=true;
	                      break;
	                  }
	                   
	                   else
	                   k[i]=false;
	               }
	           }
	       }
	   }
	  for(int i=0;i<n;i++){
	      if(k[i]==0){
	          cout<<"NO"<<endl;
	          break;
	      }
	          
	      else if(k[i]==1 && i==n-1)
	      cout<<"YES"<<endl;
	  }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    eval();
	  
	}
	return 0;
}
