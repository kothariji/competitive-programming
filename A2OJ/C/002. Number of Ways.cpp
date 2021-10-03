#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v(n), p(n+1, 0), s(n+1, 0);
    for(ll i = 0;i<n;i++){
        cin>>v[i];
        p[i+1] = p[i] + v[i];
    }
    for(ll i = n-1;i>=0;i--){
        s[i] = s[i+1] + v[i];
    }
    if(p[n]%3 != 0){
        cout<<0;
        return 0;
    }
    ll reqsum = p[n]/3;
    vector<ll> a(n+1, 0);
    for(ll i = n-1;i>=0;i--){
        a[i] = a[i+1];
        if(s[i] == reqsum &&  p[i] == 2*reqsum){
            a[i] = a[i+1] + 1;
        }        
    }
    ll ans = 0;
    for(ll i = 0;i<n;i++){
        if(p[i+1] == reqsum && i<n-1){
            ans += a[i+2];
        }
    }
    cout<<ans<<endl;
}