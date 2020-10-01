#include <iostream>
using namespace std;
bool isPrime(long long int n)
{
    int i;
    if(n==1)
    {
        return false;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isPrime(n))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
	return 0;
}
