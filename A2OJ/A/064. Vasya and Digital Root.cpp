#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{

	int k,d;
	cin>>k>>d;
	if((d == 0) and (k != 1))
	{
		cout<<"No solution";
		return 0;
	}
	cout<<d;
	for(int i=0; i<k-1; i++)
		cout<<0;
	
	return 0;
}