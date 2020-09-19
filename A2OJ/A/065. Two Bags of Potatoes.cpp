#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
 
	lli y, k, n,s,flag = 0;
	cin>>y>>k>>n;
	s = k - (y%k);
	
	for(lli i=s; i<= (n-y); i +=k)
	{
		cout<<i<<" ";	
		flag = 1;
	}
	if(flag == 0)
		cout<<-1;
	return 0;
}