// THIS QUESTION IS AVAILABLE ON CODECHEF https://www.codechef.com/problems/PAJAPONG
#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y,k;
	    cin>>x>>y>>k;
	    int serve=(x+y)/k;
	    if(serve%2==0)
	        cout<<"Chef\n";
	   else
	    cout<<"Paja\n";
	}
	return 0;
}
