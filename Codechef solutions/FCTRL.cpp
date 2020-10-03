#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned  long long int n;
        unsigned  long long int zero=0;
        unsigned  long long int quotient =0;
        cin>>n;
        quotient=n/5;
        while(quotient>0){
        zero+=quotient;
        quotient=quotient/5;}
        cout<<zero<<endl;
    }
  return 0;
}
