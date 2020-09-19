#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli a1,a2,a3;
	cin>>a1>>a2>>a3;
	lli x1 = sqrt((a1*a3)/(a2));
	lli x2 = sqrt((a1*a2)/(a3));
	lli x3 = sqrt((a2*a3)/(a1));
	cout<<4*(x1+x2+x3);
	return 0;
}