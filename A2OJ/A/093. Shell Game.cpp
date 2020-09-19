#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	int a[3] = {0};
	int n,l,r;
	cin>>n;
	a[n-1] = 1;
	int three = 3;
	while(three--)
	{
		cin>>l>>r;
		swap(a[l-1],a[r-1]);
	}
	for(int i=0;i<3;i++)
		if(a[i] == 1)
			cout<<i+1;
	

	return 0;
}