
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll e,k,c=0;
        cin>>e>>k;
        while(e!=0)
        {
            c++;
            e=e/k;
        }
        cout<<c<<endl;
    }
    return 0;
}
