#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n,k,data1,data2, maxjoy = INT_MIN;
	cin>>n>>k;
	vector <lli> f,t;
	for(int i=0; i<n; i++)
	{
		cin>>data1>>data2;
		lli joy;
		if(data2 <= k)
			joy = data1;
		else
			joy = data1 - (data2-k);
		if(joy> maxjoy)
			maxjoy = joy;
	}
	cout<<maxjoy;
	

	return 0;
}