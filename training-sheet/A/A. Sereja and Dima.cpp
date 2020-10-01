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
	int i=0,j=n-1;
	int sum=0;
	int sum1=0;
	int flag=0;
	
	while(i<=j)
	{
		if(flag==0)
		{
			flag=1;
			if(max(A[i],A[j])==A[i])
			{
			sum+=A[i];
			i++;
			}
			else
			{
				sum+=A[j];
				j--;
			}
		}
		else
		{
			flag=0;
			if(max(A[i],A[j])==A[i])
			{
			sum1+=A[i];
			i++;
			}
			else
			{
				sum1+=A[j];
				j--;
			}
			
		}
		
	}
	cout<<sum<<" "<<sum1<<endl;
	
	
return 0;	
}
