#include <bits/stdc++.h>
using namespace std;
#define mod 100000007
#define ll long long
ll fact[503];

void facto()
{
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<501;i++)
    {
        fact[i] = (fact[i-1]*i)%mod;
    }
}

int main()
{
    int t;
    facto();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll s = 0;
        for(int i=1;i<=n;i++)
        {
            ll c = 0,z=i;
            while(z%5==0)
            {
                c++;z/=5;
            }
            s = (s+(c*fact[i])%mod)%mod;
        }
        cout<<s<<endl;
    }
    return 0;
}
