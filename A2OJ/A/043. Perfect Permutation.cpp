#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2) cout<<-1;
	else
		for(int i= n; i>0; i--)
			cout<<i<<" ";

	return 0;
}