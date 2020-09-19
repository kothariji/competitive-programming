#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	float a,b,c,d,tot1, tot2;
	cin>>a>>b>>c>>d;

	tot1 = max( ((float)(3*a)/(float)10) , a - (((a)/(float)250) *c));
	tot2 = max( ((float)(3*b)/(float)10) , b - (((b)/(float)250) *d));
	if(tot1 == tot2)
		cout<<"Tie" ;
	else if(tot1 > tot2)
		cout<<"Misha";
	else
		cout<<"Vasya";
	return 0;
}