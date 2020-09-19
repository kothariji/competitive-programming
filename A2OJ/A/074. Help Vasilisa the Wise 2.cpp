#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int a , b, c,d;
	int c1,c2,r1,r2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(a = 1 ; a<=9 ; a++)
	{
		for(b = 1; b<=9; b++)
		{
			for(c= 1; c<=9; c++)
			{
				for(d = 1; d<=9; d++)
				{
					if((r1 == (a+b)) and (r2 == (c+d)) and (c1 == (a+c)) and (c2 == (b+d)) and (d1 == (a+d)) and (d2 == (b+c)))
					{
						cout<<a<<" "<<b<<endl;
						cout<<c<<" "<<d<<endl;
						return 0;
					}
				}
			}
		}
	}
	
	return 0;
}