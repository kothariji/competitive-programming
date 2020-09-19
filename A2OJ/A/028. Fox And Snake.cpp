#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	for(int i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			for(int j=1; j <= m; j++)
				cout<<"#";
			cout<<endl;
		}
		else if(i%4 == 0)
		{
			cout<<"#";
			for(int j=1; j < m; j++)
				cout<<".";
			cout<<endl;
		}
		else
		{
			
			for(int j=1; j < m; j++)
				cout<<".";
			cout<<"#";
			cout<<endl;
		}
	}
	
	return 0;
}