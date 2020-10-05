#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	int i=0,j=n-1;
	int sum=0,sum1=0,count=0;
	while(i<=j)
	{
		if(sum>=sum1)
		{
			sum1+=A[j];
			j--;
			count++;
		}
		else
		{
			sum+=A[i];
			i++;
		}
	}
	if(sum>=sum1)
	{
		count++;
	}
	cout<<count<<endl;
	
	
return 0;	
}
