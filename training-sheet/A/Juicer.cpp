#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	lli n,b,d;
	cin>>n>>b>>d;
	lli A[n];
	for(lli i=0;i<n;i++)
	{
		cin>>A[i];
	}
	lli sum=0;
	int count=0;
	for(lli i=0;i<n;i++)
	{
		if(A[i]>b)
		{
			continue;	
		}	
		else
		{
			sum+=A[i];
		}
		while(sum>d)
		{
			count++;
			sum=0;
		}
		
	}	
	cout<<count<<endl;
	
return 0;	
}
