#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    unordered_map<int,int> m;
	    for(int i=0;i<n; i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    if(n<=2)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int maxi = INT_MIN;
	        for(auto it = m.begin(); it!= m.end(); it++)
	        {
	            if(it->second> maxi)
	            {
	                maxi= max(maxi,it->second);
	            }
	        }
	        int ans= min(n-2, n-maxi);
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
