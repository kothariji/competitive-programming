#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a==7 || b==7 || c==7)
	    cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}