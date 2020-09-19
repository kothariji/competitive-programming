#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	lli k,l;
	cin>>k>>l;
	if(l%k == 0)
	{
		int count = 0;
		while(l%k == 0)
		{
			count++;
			l /= k;
		}

		if(l == 1)
		{
			cout<<"YES"<<endl;
			cout<<count-1;
		}	
		else
			cout<<"NO";
	}
	else
			cout<<"NO";
	return 0;
}