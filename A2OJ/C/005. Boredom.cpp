#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,x,n) for(ll i = x;i<n;i++)
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> m;
    loop(i,0,n){
        cin>>v[i];
        m[v[i]]++;
    }
    ll N = 1e5+10;
    vector<ll> dp(N+1, 0);
    dp[1] = m[1];
    loop(i, 2, N+1){
        dp[i] = max(dp[i-1], dp[i-2] + m[i]*i);
    }
    cout<<dp[N];    
}
