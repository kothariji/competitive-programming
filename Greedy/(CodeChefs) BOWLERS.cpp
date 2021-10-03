/********************************************
********* Code By Sweta**********************
********************************************/

#include<bits/stdc++.h>
using namespace std;
void eval(){
    	int n,k,l,temp=0,r=0;
		cin>>n>>k>>l;
		long long int multi=k*l;
		if(multi>=n && k>1){
		  vector <int> v;
		  for(int i=0; i<k; i++){
		  	v.push_back(0);
		  }	
		  while(n>0){
		  	if(v[temp]==0 && temp<k && v[temp]<l){
		  		cout<<temp+1<<" ";
		  		v[temp]+=1;
		  		temp++;
			  }
			  else if(temp==k){
			  	 temp=0;
			  	 r++;
			  	 n++;
			  }
			else if(r>0 && v[temp]<l && temp<k){
				cout<<temp+1<<" ";
				v[temp]+=1;
				temp++;
			}
			else if(v[temp]==l){
			    temp++;
			    n++;
			}
		     n--;	  
		  }
		  cout<<endl;
		}
		
		else if(k==1 && n==1)
		cout<<1<<endl;
		
		
		else
		cout<<-1<<endl;
		
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    eval();
	
	
	}
	return 0;
}

