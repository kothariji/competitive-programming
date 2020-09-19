#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,data1,data2,su = 0, sl = 0;
	int eo = 0;
	cin>>n;
	for(int i=1; i <= n; i++)
	{
		cin>>data1>>data2;
		su += data1;
		sl += data2;
		if((data1%2) != (data2%2))
		{
			eo++;
		}
	}
	if((su%2 == 0) and(sl%2 == 0))
		cout<<0;
	else if(su%2 != sl%2)
		cout<<-1;
	else
	{
		if(eo)
			cout<<1;
		else
			cout<<-1;
	}
	return 0;
}