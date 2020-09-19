#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],even = 0, odd = 0;
	int check;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]%2 == 0)
			even++;
		else
			odd++;
	}
	if(odd > even)
		check = 0;
	else
		check = 1;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2 == check)
		{
			cout<<i+1;
			break;
		}

	}
	
	return 0;
}