#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,m, mini(INT_MAX);
	cin>>n>>m;
	int a[m];
	for(int i=0; i<m; i++)
		cin>>a[i];
	sort(a, a+m, greater <int>());
	for(int i = 0; i<= m-n; i++)
	{
		int diff = a[i] - a[i+n-1];
		if(diff < mini)
			mini = diff;
	}
	cout<<mini;

	return 0;
}