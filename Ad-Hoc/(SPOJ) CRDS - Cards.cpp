#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		cout<<((((n*n)*3) + n) / 2)%1000007<<endl;
	}
	return 0;
}