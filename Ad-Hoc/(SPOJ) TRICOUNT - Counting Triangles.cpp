#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		n = n*(n+2)*((2*n)+1);
		cout<<(lli)n/(lli)8<<endl;
	}	
	return 0;
}