#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,data;
	cin>>n;
	lli sumx(0), sumy(0), sumz(0); 
	while(n--)
	{
		cin>>data;
		sumx += data;
		cin>>data;
		sumy += data;
		cin>>data;
		sumz += data;
	}
	if((sumx != 0) or (sumy != 0) or (sumz != 0))
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}