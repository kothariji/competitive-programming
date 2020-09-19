#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;

	int a[n];
	int churutot = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		churutot += a[i];
	}
	
	churutot += 10*(n-1);
	if(d>= churutot)
		cout<<2*(n-1) + (d - churutot)/5;
	else
		cout<<-1;
	
	return 0;
}