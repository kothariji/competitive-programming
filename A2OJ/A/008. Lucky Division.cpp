#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int num;
	cin>>num;
	if((num%4 == 0) or (num%7 == 0) or (num%47 == 0) or (num%74 == 0) or (num%447 == 0) or (num%474 == 0) or (num%477 == 0) or (num%747 == 0) or (num%774 == 0))
		cout<<"YES";
	else
		cout<<"NO";
	

	return 0;
}