#include <iostream>
using namespace std;

int main() {
	
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		long long int ans = ((n)*(n+1)*((2*n)+1))/6;
		cout<<ans<<"\n";
	}
	return 0;
}