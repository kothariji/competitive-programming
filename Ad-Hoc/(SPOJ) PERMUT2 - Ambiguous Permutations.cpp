#include <iostream>
#define lli long long int 
using namespace std;

bool check(int *a, int n)
{
	for(int i=0; i<n; i++)
		if(a[a[i]-1] != i+1)
			return false;
	return true;		
}

int main() {
	// your code goes here
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		if(check(a,n))
			cout<<"ambiguous"<<endl;
		else
			cout<<"not ambiguous"<<endl;
	}
	return 0;
}