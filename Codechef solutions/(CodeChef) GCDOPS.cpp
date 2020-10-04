/********************************************
********* Code By Sweta**********************
********************************************/

#include <bits/stdc++.h>
using namespace std;
void one(int n){
    int x;
    cin>>x;
    if(x<0)
    cout<<"NO"<<endl;
    else
     cout<<"YES"<<endl;
}
void evalv(){
     int n,sn=0,sp=0;
	    cin>>n;
	    if(n==1)
	      one(n);
	      else{
	         int ar[n];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        if(ar[i]<0)
	        sn+=ar[i];
	        else
	        sp+=ar[i];
	    }
	   if(sn+sp>=0)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	      }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	   evalv();
	}
	return 0;
}
