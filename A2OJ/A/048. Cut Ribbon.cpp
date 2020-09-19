#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int z = 0,maxi = INT_MIN;
	for(int i =0; i<=4000; i++)
	{
		for(int j=0; j<=4000; j++)
		{
			int rhs  = n - (a*i) - (b*j);
			if((rhs%c == 0) and (rhs >= 0))
			{
				z = rhs/c;
				if(maxi < (i+j+z))
					maxi = i+j+z;
			}

		}
	}
	cout<<maxi;
	return 0;
}