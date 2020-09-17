#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		cin>>x>>y;
		if(x < 0 or y < 0)
			cout<<"No Number"<<"\n";
		else if(x==0 and y==0)
			cout<<0<<"\n";
		else if(x==1 and y==1)
			cout<<1<<"\n";	
		else if(x==y or y == (x-2))
		{
			if(y == (x-2))
			{
				if(x%2==0)
				{
					cout<<(((x-2)*2)+2)<<"\n";
				}
				else
				{
					cout<<(((x-2)*2)+1)<<"\n";
				}
			}
			else 
			{
				if(x%2==0)
				{
					cout<<(((x-1)*2)+2)<<"\n";
				}
				else
				{
					cout<<(((x-1)*2)+1)<<"\n";
				}
			}
		}
		else
			cout<<"No Number"<<"\n";
	}
	return 0;
}