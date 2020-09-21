#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n, m , k, ans(0);
	cin>>n>>m>>k;
	vector <int> v1(m+1);
	for(int i =0; i<m+1; i++)
		cin>>v1[i];
	for(int i =0; i<m; i++)
		if(__builtin_popcount((v1[i]^v1[m])) <= k)
			ans++;
		cout<<ans;
	return 0;
}