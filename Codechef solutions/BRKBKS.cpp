// CODECHEF QUESTION https://www.codechef.com/problems/BRKBKS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int s,w1,w2,w3;
	    int s1,s2;
	    cin>>s>>w1>>w2>>w3;
	    s1=w1+w2;
	    s2=w2+w3;
	    if((w1+w2+w3)<=s)
	        cout<<1<<endl;
	   else if(s1<=s ||s2<=s)
	    {
	        cout<<2<<endl;
	    }
	    else
	        cout<<3<<endl;
	   
	}
	return 0;
}