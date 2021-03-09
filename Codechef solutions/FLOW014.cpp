#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,c;
		float b;
		cin>>a>>b>>c;
		int a1=0,b1=0,c1=0;
		if(a>50)
			a1++;
		if(b<0.7)
			b1++;
		if(c>5600)
			c1++;
		if(a1==1 && b1==1 && c1==1)
		{
			cout<<"10"<<endl;
		}
		else if(a1==1 && b1==1 && c1==0)
		{
			cout<<"9"<<endl;
		}
		else if(a1==0 && b1==1 && c1==1)
		{
			cout<<"8"<<endl;
		}
		else if(a1==1 && b1==0 && c1==1)
		{
			cout<<"7"<<endl;
		}
		else if(a1==0 && b1==0 && c1==1)
		{
			cout<<"6"<<endl;
		}
		else if(a1==1 && b1==0 && c1==0)
		{
			cout<<"6"<<endl;
		}
		else if(a1==0 && b1==1 && c1==0)
		{
			cout<<"6"<<endl;
		}
		else 
			cout<<"5"<<endl;
	}

	return 0;
}