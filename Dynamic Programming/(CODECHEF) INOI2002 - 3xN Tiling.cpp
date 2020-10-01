#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7, N = 1e6+7;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll k, n;
        cin>>k>>n;
        if(k == 1){
            cout<<(n%3==0?1:0)<<endl;
        }
        else if(k == 2){
            vector<ll> dp(n+5, 0);
            dp[2] = 1;
            dp[3] = 1;
            for(ll i = 4;i<=n;i++)dp[i] = (dp[i-3]+dp[i-2])%mod;
            cout<<dp[n]<<endl;
        }
        else{
            vector<ll> dp(n+5, 0), dp2(n+5, 0), dp3(n+5, 0);
            dp[1] = dp[2] = dp[3] = 1;
            dp[3]++;
            dp3[3] = 1;

            for(int i = 4;i<=n;i++){
                dp[i] = (dp[i-3]%mod + dp[i-1]%mod + (dp2[i  -2]*2)%mod)%mod; 
                dp3[i] = (dp[i-3] + dp3[i-3])%mod ;
                dp2[i] = (dp2[i-3] + dp3[i-1])%mod;
            
            }
            cout<<dp[n]%mod<<endl;
        }
    }
}
