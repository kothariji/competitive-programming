#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		ll x,y,temp,cur,count,w=1,i;
    		cin>>x>>y;
    		temp=x;
    		count=0;
    		cur=2;

    		while(temp%2==0)
    		{
    			count++;
    			temp=temp/2;
    		}
    		for(i=3;i<=sqrt(temp);i=i+2)
    		{
    			while(temp%i==0)
    			 {
    			 	count++;
    			 	temp=temp/i;
    			 }
    		}
    		if(temp>2)
                count++;
    		if(count>=y)
                cout<<"1"<<endl;
    		else
                cout<<"0"<<endl;
    	}
    	return 0;
    }
