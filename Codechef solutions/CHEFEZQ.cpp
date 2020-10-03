#include <iostream>
#include<vector>
using namespace std;

int main() {
	long int t,n,i,pos;
	long long int k,x;
	cin>>t;
	while(t--){
	    x=0;pos=-1;
	    cin>>n>>k;
	    vector<long long int> Q(n);
	    for(i=0;i<n;i++)
	    {
	        cin>>Q[i];
	        x+=Q[i];
	        if(x<k && pos==-1)pos=i+1;
	        else x-=k;
	    }
	    if(pos==-1)cout<<n+(x/k)+1<<"\n";
	    else cout<<pos<<"\n";
	}
	return 0;
}
