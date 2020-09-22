#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n, m;
	cin>>n>>m;
	lli maxi = ((n-m+1)*(n-m))/2;
	lli mineach = n/m;
	lli mini;
	if(n<m)
		cout<<0<<" "<<0;
	
	else if(m == 1)
		cout<<n*(n-1)/2 <<" "<<n*(n-1)/2<<"\n";
	else if(n%m == 0)
	{
		cout<<((mineach*(mineach-1))/2) * m<<" "<<((n-m+1)*(n-m))/2<<endl;
	}
	else
		cout<<(m-n%m)*(mineach)*(mineach - 1)/2 + (n%m)*(mineach)*(mineach + 1)/2<<" "<<maxi<<endl;
	return 0;
}