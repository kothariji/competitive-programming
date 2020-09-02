#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;

int main()
{
	lli n, data, prev = 0, energy = 0;
	cin>>n;
	vector <lli> v1(n);
	lli ans = 0;
	for(lli i =0; i<n; i++)
	{
		cin>>data;
		if(energy < (data-prev))
		{
			ans += ((data-prev));
			energy = 0;
			prev = data;
		}
		else
		{
			energy += (prev - data);
			prev = data;
		}

	}
	cout<<ans;
}
