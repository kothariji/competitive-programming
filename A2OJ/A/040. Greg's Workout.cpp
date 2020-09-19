#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int chest = 0, bicep = 0, back = 0;
	for(int i=1; i<=n; i++)
	{	
		int data;
		cin>>data;
		if(i%3 == 0)
			back += data;
		else if(i%3 == 1)
			chest += data;
		else
			bicep += data;
	}
	//cout<<chest<<" "<<bicep<<" "<<back<<endl; 
	if((chest > bicep) and (chest >back))
		cout<<"chest";
	else if((chest < bicep) and (bicep >back))
		cout<<"biceps";
	else
		cout<<"back";

	

	return 0;
}