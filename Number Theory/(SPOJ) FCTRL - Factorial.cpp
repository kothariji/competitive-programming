#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		long long int counti = 0;
		cin>>n;
		while(n>=5)
		{
			counti += n/5;
			n /= 5;
		}
		cout<<counti<<"\n";
	}
	return 0;
}