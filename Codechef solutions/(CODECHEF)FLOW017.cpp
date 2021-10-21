/*
    PROBLEM : FLOW017 (Second Largest)
*/

#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c && b>c)
        {
            cout<<b<<endl;
        }
        if(a>b && a>c && c>b)
        {
            cout<<c<<endl;
        }
        if(b>a && b>c && a>c)
        {
            cout<<a<<endl;
        }
        if(b>a && b>c && c>a)
        {
            cout<<c<<endl;
        }
        if(c>a && c>b && a>b)
        {
            cout<<a<<endl;
        }
        if(c>a && c>b && b>a)
        {
            cout<<b<<endl;
        }
    }
    return 0;
}
