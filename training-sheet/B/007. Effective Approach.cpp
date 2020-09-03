#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;


int main()
{
	int n, data;
	cin>>n;
	vector<int>v1(n+1);

	for(int i = 0; i<n; i++)
	{
		cin>>data;
		v1[data] = i+1;
	}

	lli ansa(0), ansb(0);
	int q;
	cin>>q;
	while(q--)
	{
		cin>>data;
		ansa += v1[data];
		ansb += (n - v1[data] + 1);
	} 
	cout<<ansa<<" "<<ansb;


}
