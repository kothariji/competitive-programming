#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main() 
{
	int n, l, r, fl, fr, count= 0;
	cin>>n;
	int a[102] = {0};
	cin>>fl>>fr;
	for(int i=fl; i<fr; i++) 
		a[i]++;
	for(int i=1; i<n; i++) 
	{
		cin>>l>>r;
		for(int j=l; j<r; j++) 
			a[j]++;
	}
	for(int i=fl; i<fr; i++) 
		if(a[i]==1) 
			count++;
	cout<<count;
	return 0;
}