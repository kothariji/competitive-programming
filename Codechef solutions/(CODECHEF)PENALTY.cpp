#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,A[10];
	cin>>t;
	while(t--)
	{
	    int ec=0,oc=0;
	    for(int i=1;i<=10;i++) cin>>A[i];
	    for(int i=1;i<=10;i++)
	    {
	        if(i%2==0) ec=ec+A[i];
	        else oc=oc+A[i];
	    }
	    //cout<<ec<<oc<<endl;
	    if(ec>oc) cout<<"2"<<endl;
	    else if(ec<oc) cout<<"1"<<endl;
	    else cout<<"0"<<endl;

	}
	return 0;
}