#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int a[n];
            for(int i=0; i<n/2; i++)
            {
                a[i]=2*i + 2;
                cout<<a[i]<<" ";
            }
            for(int i=n/2,j=0; i<(n/2 + n/4); i++,j++)
            {
                a[i] = a[j] - 1;
                cout<<a[i]<<" ";
            }
            for(int i=(n/2 + n/4),j=n/4 ; i<n; i++,j++)
            {
                a[i] = a[j] + 1;
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
