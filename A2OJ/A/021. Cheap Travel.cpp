#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n,m,a,b,sum = 0;
	cin>>n>>m>>a>>b;

	if(m*a >= b)
	{
		sum += (n/m)*b;
		if((n%m)*a < b)
			sum += (n%m)*a;
		else 
			sum += b;
		cout<<sum;	
	}
	else
		cout<<n*a;
	
	return 0;
}