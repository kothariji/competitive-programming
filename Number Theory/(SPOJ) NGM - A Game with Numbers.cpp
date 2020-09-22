#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli n;
	cin>>n;
	if(n%10 == 0)
	{
		cout<<2<<endl;
	}
	else{
		cout<<1<<endl;	
		cout<<n%10<<endl;
	}

	
	return 0;
}