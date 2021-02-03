#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define m 1e9+7
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int q;
    cin>>q;
    while(q--)
    {
        ll n,x,i;
        cin>>n;
 
        i=1;
        x=1;
        while(n>i*9*x)
        {
            n-=i*9*x;
            i++;
            x*=10;
        }
 
        if(n%i==0)
        {
             cout<<(x-1+n/i)%10;
        }
 
        else
        {  
            ll y=x+n/i;
            ll j=pow(10,i-n%i);
            y/=j;
            cout<<y%10;
        }
        cout<<"\n";
 
    }
 
}    
 