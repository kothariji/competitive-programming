#PROBLEM-OROFAND

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,q;cin>>n>>q;
        ll a[n];
        for(int i = 0;i<n;i++)
            cin>>a[i];
        int dp[31] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                ll x = 1<<j;
                if(a[i]&x)
                    dp[j] += 1;
            }
        }
        ll ans = 0;
        for(int i=0;i<31;i++){
            ll x = 1<<i;
            if(dp[i])
                ans += x;
        }
        cout<<ans<<endl;
        for(int k=0;k<q;k++){
            ll idx,val;
            cin>>idx>>val;
            for(int i=0;i<31;i++){
                ll x=1<<i;
                if(a[idx-1]&x){
                    dp[i] -= 1;
                }
            }
            for(int i=0;i<31;i++){
                ll x = 1<<i;
                if(val&x){
                    dp[i] += 1;
                }
            }
            a[idx-1] = val;
            ll ans = 0;
            for(int i=0;i<31;i++){
                ll x = 1<<i;
                if(dp[i]>0)
                    ans += x;
            }
            cout<<ans<<endl;
        }
    }
}
