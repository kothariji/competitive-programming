//https://www.codechef.com/submit/SINGLEOP1
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            k++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<k<<endl;
	}
}