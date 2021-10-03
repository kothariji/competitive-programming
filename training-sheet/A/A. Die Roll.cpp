#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	int a,b;
	cin>>a>>b;
	int z=max(a,b);
	int y=6-z+1;
	if(y==0)
	{
		cout<<"0/1";
	}
	else if(y%6==0)
	{
		cout<<"1/1";
	}
	else if(y%3==0)
	{
		cout<<"1/2";
	}
	else if(y%2==0)
	{
		cout<<y/2<<"/"<<6/2;
	}
	
	else
	{
		cout<<y<<"/6";
	}
	
return 0;	
}
