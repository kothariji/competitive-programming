#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		int A[n];
		for(int i=0;i<n;i++)
		{
			A[i]=i;
		}
		for(int i=x;i<n;i=(i+k)%n)
		{
			if(A[i]==y)
			{
				cout<<"YES"<<endl;
				break;
			}
			else if(A[i]==-1)
			{
				cout<<"NO"<<endl;
				break;
			}
			else
			{
				A[i]=-1;
			}
		}
//		0 1 -1 3 4 5 -1 7 8 9 -1 11
	}
 	
	
	
	
	
return 0;	
}
