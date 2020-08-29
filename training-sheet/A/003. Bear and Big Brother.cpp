#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;



int main()
{
	int a, b;
	cin>>a>>b;
	int yrs = 0;
	while(a <= b)
		a = a*3, b = b*2, yrs++;
	cout<<yrs;

}