#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int st = 1;
	for(int i=0; i<n; i++)
	{
		if(a[i] != st)
		{
			cout<<st;
			return 0;
		}
		st++;
	}
	cout<<st;
			return 0;

}