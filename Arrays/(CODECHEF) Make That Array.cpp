#include <iostream>
#include<bits/stdc++.h>

#define ll long long
#define int long long 
using namespace std;

int32_t main()
{
ios::sync_with_stdio(false); cin.tie(0);
ll TC;
cin>> TC;
while(TC--)
{
    ll n;
    cin>>n;
    ll num, A=0,B=0;
    for(ll i=1; i<=n;i++)
    {
        cin>>num;
        A+=i*num;
        
    }
    for(ll i=1;i<=n;i++)
    {
        cin>>num;
        B+=i*num;
    }
    cout<<B-A<<"\n";
}
return 0;
}