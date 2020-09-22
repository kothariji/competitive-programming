#include <iostream>
using namespace std;

int main() {
	
	long long int  n;
	cin>>n;
	if(n==1)
		cout<<"NIE";
		
	else if(!(n & (n-1)))
		cout<<"TAK";
	else
		cout<<"NIE";
	
	// your code goes here
	return 0;
}