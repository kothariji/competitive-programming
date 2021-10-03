#include<bits/stdc++.h>
#define ll long long int
#define speed ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(NULL)
using namespace std;

int main()
{
    speed;
    ll t;
    cin>>t;
    while(t--)
    {
        ll c;
        cin>>c;
        ll d=log2(c)+1;
        ll car[d],in=0,a=0,b=0,flag=0;
        for(ll i=d-1;i>=0;i--)
        {
            ll x=c>>i;
            if(x&1)
              car[in++]=1;
            else
              car[in++]=0;
        }
        for(ll i=0;i<d;i++)
        {
            if(car[i]==0)
            {
                    //  a1[i]=1;
                    //  b1[i]=1;
                    a+=1*pow(2,d-i-1);
                    b+=1*pow(2,d-i-1);
            }
            else
            {
                if(flag==0)
                {
                    // a1[i]=1;
                    // b1[i]=0;
                    a+=1*pow(2,d-i-1);
                    b+=0*pow(2,d-i-1);
                    flag=1;
                }
                else
                {
                    //  b1[i]=1;
                    // a1[i]=0;
                    a+=0*pow(2,d-i-1);
                    b+=1*pow(2,d-i-1);
                }
                
            }
           
        }
        // for(ll i=0;i<d;i++)
        //   cout<<a1[i];
        // cout<<"\n";  
        // for(ll i=0;i<d;i++)
        //   cout<<b1[i];
        // cout<<"\n";  
        cout<<a*b<<"\n";
    }
    return 0;
}
