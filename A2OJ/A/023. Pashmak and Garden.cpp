#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1 == x2)
	{
		int diff = (y2-y1);
		cout<<x1+diff<<" "<<y1<<" "<<x1+diff<<" "<<y2;
	}
	else if(y1 == y2)
	{
		int diff = (x2-x1);
		cout<<x1<<" "<<y1+diff<<" "<<x2<<" "<<y1+diff;
	}
	else if((y1-y2) == (x1-x2))
	{
		int diff = (x2-x1);
		cout<<x1<<" "<<y1+diff<<" "<<x2<<" "<<y2-diff;
	}	
	else if( abs(y1-y2) == abs(x1-x2))
	{
		int diff = (x2-x1);
		cout<<x1<<" "<<y1-diff<<" "<<x2<<" "<<y2+diff;
	}
	else
		cout<<-1;
	return 0;
}