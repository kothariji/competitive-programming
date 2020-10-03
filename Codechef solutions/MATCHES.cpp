#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,rem;
		long long int res,k;
		int ar[]={6,2,5,5,4,5,6,3,7,6};
		cin>>a>>b;
		res=a+b;
		k=0;
		while(res>0)
		{
			rem=res%10;
			k=k+ar[rem];
			res/=10;
		}
		cout<<k<<endl;
	}
}
