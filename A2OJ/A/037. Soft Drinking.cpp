#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int  n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int maxdrink = (k*l)/nl;
	int maxslice = (c*d);
	int maxsalt = p/np;
	cout<<min(maxsalt, min(maxslice, maxdrink))/n;

	return 0;
}