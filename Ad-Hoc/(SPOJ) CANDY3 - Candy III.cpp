#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,data;
		cin.get();
		cin>>n;
		int ans = 0;
		for(int i =0; i<n; i++)
		{
			cin>>data;
			ans = (ans + data%n)%n;
		}
		
		ans %= n;
		if(ans == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			 
		
	}
	return 0;
}