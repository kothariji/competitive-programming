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
	if(n<3)
	{
		cout<<"0"<<endl;
	}
	else
	{
		int count=n-2;
		sort(A,A+n);
		for(int i=1;i<n-1;i++)
		{
			if(A[i]==A[0] || A[i]==A[n-1])
			{
				count--;
			}
		}
		cout<<count<<endl;
	}
//	1 2 2 3 3 
return 0;	
}
