#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	lli n;
	cin>>n;
	vector <lli> v1(n);
	for(int i = 0; i<n ; i++)
		cin>>v1[i];
	sort(v1.begin(), v1.end());
	for(auto c: v1)
		cout<<c<<" ";
	return 0;
}