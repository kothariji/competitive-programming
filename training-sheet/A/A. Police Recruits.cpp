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
	int currsum=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		currsum+=A[i];
		if(currsum<0)
		{
			count++;
			currsum=0;	
		}	
		
	}	
	cout<<count<<endl;3
-1 -1 1

return 0;	
}
