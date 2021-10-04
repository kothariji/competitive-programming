#include<bits/stdc++.h>
#define ll long long int
#define speed ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(NULL)
using namespace std;

int main()
{
    speed;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll john[n],jack[m],jo=0,jk=0,swp=0;
        for(ll i=0;i<n;i++)
        {
            cin>>john[i];
            jo+=john[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>jack[i];
            jk+=jack[i];
        }
        sort(john,john+n);
        sort(jack,jack+m,greater<ll>());
        bool f=0;
        for(ll i=0;i<n;i++)
        {
            if(jo > jk)
            {
                f=1;
                break;
            }
            jo+=jack[i]-john[i];
            jk+=john[i]-jack[i];
            swp++;
        }
        if(f==1 || jo>jk)
          cout<<swp<<"\n";
        else
          cout<<"-1\n";
    }
    return 0;
}
