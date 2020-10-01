#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	int A[t];
	int B[t];
	for(int i=0;i<t;i++){
		cin>>A[i];
		cin>>B[i];
	}
	int sum=0;
	for(int i=0;i<t;i++)
	{
		sum+=count(B,B+t,A[i]);
	}
	cout<<sum;
	
return 0;	
}
