#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n , m,data, pd = 1;
	cin>>n>>m;
	lli ans = 0;
	while(m--)
	{
		cin>>data;
		if(data >= pd)
			ans += (data-pd);
		else
			ans += n - abs(data-pd);
		pd = data;
	}
	cout<<ans;
	return 0;
}