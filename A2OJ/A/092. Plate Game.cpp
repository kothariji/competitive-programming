#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n1,n2,r;
	cin>>n1>>n2>>r;
	int d = r*2;
	if(d > min(n1,n2))
		cout<<"Second";
	else
		cout<<"First";
	

	return 0;
}