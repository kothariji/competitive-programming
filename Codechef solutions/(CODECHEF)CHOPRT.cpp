/*
    PROGRAM : CHOPRT (Chef And Operators)
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
        ll a,b;
        cin>>a>>b;
        if(a>b) 
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}
