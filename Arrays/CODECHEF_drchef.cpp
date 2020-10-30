//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	// your code goes here
	long long t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    long long a[n];
	    for(long long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long ind=0;
	    int n = sizeof(a) / sizeof(a[0]);
	    sort(a,a+n);
	    for(long long i=0;i<n;i++)
	    {
	        if(a[i]>x/2)
	        {
	            ind=i;
	            break;
	        }
	    }
	    long long days=0;
	    for(int i=ind;i<n;i++)
	    {
	        while(x<a[i])
	        {
	            x*=2;
	            days++;
	        }
	        if(x>=a[i])
	        {
	         x=a[i]*2;
	         days++;
	        }
	    }
	    days+=ind;
	    cout<<days<<"\n";
	}
	return 0;
}