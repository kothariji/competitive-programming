#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int>vt;
typedef pair<int,int>pr;
#define fo(i,a,b) for(int i=a; i<=b; i++)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n],b[n];
        ll r=0,s=0;
        vector<int>vt;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            r+=a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            vt.push_back(2*a[i]+b[i]);
        }
        ll c=0;
        sort(vt.rbegin(),vt.rend());
        while(s<=r)
        {
            s+=vt[c];
            c++;
        }
        cout<<c<<endl;
    }
}
