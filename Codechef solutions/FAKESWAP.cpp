//Solution By Hardik Mittal
//Question :- https://www.codechef.com/COOK133B/problems/FAKESWAP
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007

void solve()
{
    ll i,n;
    cin>>n;

    string s,p;
    cin>>s>>p;

    if(s==p)
    {
        cout<<"YES"<<endl;
        return;
    }

    bool o=false,z=false;
    for(i=0;i<n;i++)
    {
        if(p[i]=='0')
            z=true;
        else
            o=true;
    }

    if(o==false||z==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
