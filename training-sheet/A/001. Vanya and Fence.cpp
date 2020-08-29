#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;



int main()
{
	int n , k,h;
	cin>>n>>k;
	lli wid = 0;
	while(n--)
	{
		cin>>h;
		wid += (h > k) ? 2 : 1;
	}
	cout<<wid;
}