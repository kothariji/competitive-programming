#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n, k;
	cin>>n>>k;
	if(n%2 == 0)
	{
		if(k <= n/2)
			cout<<(2*k)-1;
		else
			cout<<(k-(n/2))*2;
	}
	else
	{
		if(k <= (n+1)/2)
			cout<<(2*k)-1;
		else
			cout<<(k-((n+1)/2))*2;
	}
	return 0;
}