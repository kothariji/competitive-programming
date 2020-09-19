#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	/******************
	Any two consecutive integers are always coprime. 
	Sum of any two coprime numbers is always coprime to their product. 
	If out of two numbers, any one number is a prime number 
	while other numberis not a multiple of first one, then both are coprime.
	*******************/
	lli l,r;
	cin>>l>>r;
	//we know that any two consecutive numbers are coprime, so we can do EVEN ODD EVEN
	//but we can't do ODD EVEN ODD becuase it may be chance that first ODD and last ODD are co prime
	//but in case of EVEN ODD EVEN we are sure that both first and last EVEN have GCD atleast 2. So
	if(l%2 != 0)
		l++;
	if(l + 2 > r)
		cout<<-1;
	else
		cout<<l<<" "<<l+1<<" "<<l+2;

	return 0;
}