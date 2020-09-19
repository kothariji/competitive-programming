#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1] = i+1;
	}
	for(auto c: b)
		cout<<c<<" ";
	
	return 0;
}