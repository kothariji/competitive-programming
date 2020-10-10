#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,x,n) for(ll i = x;i<n;i++)


int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double r, a, b, c, d,dist;
    cin>>r>>a>>b>>c>>d;
    dist =sqrt((c-a)*(c-a) + (d-b)*(d-b));
    cout<<ceil(dist/(2*r));  
}