#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	vector <int> diff;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(i != 0)
			diff.push_back(a[i]-a[i-1]);
	}
	int maxi = *max_element(diff.begin(), diff.end());
	int ans = INT_MAX;
	for(int i=1; i<n-1; i++)
	{
		ans  = max(maxi, min(ans, diff[i] + diff[i-1]));
	}
	 cout<<ans;
	return 0;
}