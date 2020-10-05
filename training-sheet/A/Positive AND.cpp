#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		vector<lli>v;
		if(n==1)
		{
			
			cout<<1<<endl;
		}
		else if(__builtin_popcount(n)==1)
		{
			
			cout<<"-1"<<endl;
		}
		
		else
		{
			cout<<"2 3 1 ";
			for(lli i=4;i<=n;i++)
			{
				if(__builtin_popcount(i)==1)
				{
					cout<<i+1<<" "<<i<<" ";
					i++;
				}
				else
				{
					cout<<i<<" ";
				}
			}
			
		}
			
	}
	
	
return 0;	
}
