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
		int n,k,l;
		cin>>n>>k>>l;
		if(n > (k*l))
			cout<<-1<<endl;
		else if(k == 1)
		{
			if(n == 1)
				cout<<1;
			else
				cout<<-1;
		}
		else
		{
			int i = 1;
			while(n--)
			{
				cout<<i<<" ";
				i++;
				if(i > k)
					i = 1;
			}
		}
		cout<<endl;

	}

	return 0;
}