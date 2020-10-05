#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	int n,t;
	cin>>n>>t;
	int count=0;
	int i=1;
	int z=n;
	while(true)
	{
		
		count++;
		n=z*i;
		
		if((n%10)==t || (n%10)==0)
		{
			break;
		}
		
		
		i++;
	}	
	cout<<count<<endl;
return 0;	
}
