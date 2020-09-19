#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((a == 1) and (b == 1) and (c == 1))
		cout<<3;
	else if(a==1 and c==1)
		cout<<a+b+c;
	else if(a==1)
		cout<<(a+b)*c;
	else if(c==1)
		cout<<a*(b+c);
	else if(b==1)
	{
		if(a>c)
			cout<<a*(b+c);
		else
			cout<<(a+b)*c;
	}
	else
		cout<<a*b*c;
	return 0;
}