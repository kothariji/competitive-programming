#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int m;
	cin>>m;
	int x,y;
	while(m--)
	{
		cin>>x>>y;
		if(x==1)
		{
			A[x]+=A[x-1]-y;	
			A[x-1]=0;
		}
		else
		{
			A[x-2]+=y-1;
			A[x]+=A[x-1]-y;
			A[x-1]=0;
		}	
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
	
	
return 0;	
}
