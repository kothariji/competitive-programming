//https://www.codechef.com/submit/SINGLEOP2
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        k++;
	        if(s[i+1]=='1')
	        {
	            break;
	        }
	    }
	    cout<<k<<endl;
	}
}
