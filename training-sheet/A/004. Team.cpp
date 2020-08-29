#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;



int main()
{
	int n,x,y,z, count = 0;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>z;
		if((x+y+z) > 1) count++;
	}
	cout<<count;

}