#include <iostream>
#define lli long long int
using namespace std;

lli power(lli a, lli n, lli p)
{
    lli res = 1;
    while(n > 0)
    {
        if (n%2 != 0)
        {
            res = (res*a)%p;
            n--;
        }
        else
        {
            n /= 2;
            a = (a*a)%p;
        }
    }
    return res;
}

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,n;
		cin>>a>>n;
		cout<<power(a,n,10)<<"\n";
	}
	return 0;
}