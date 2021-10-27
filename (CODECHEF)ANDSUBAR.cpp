#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        ll ans=1;
        while(ans*2<=n)
        {
            ans=ans*2;
        }
        ll a=n-ans+1;
        if(ans==n)
        {
            cout<<ans/2<<endl;
        }
        else
        {
            cout<<max(a,ans/2)<<endl;
        }
    }
    return 0;
}
