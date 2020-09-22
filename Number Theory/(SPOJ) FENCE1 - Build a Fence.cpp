#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	lli n;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		cout<<setprecision(2)<<fixed<<(n*n)/(2*M_PI)<<endl;
	}
 
	return 0;
}