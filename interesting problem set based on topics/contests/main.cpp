#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = int(1e9+7);
const int MN = int(2e6+7);

int dp[MN];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    dp[0] = dp[1] = 0;
    dp[2] = 4;
    for(int i = 3; i < MN; i++){
        long long w = dp[i-1];
        w += 2*dp[i-2] + (i % 3 == 2)*4;
        w %= mod;
        dp[i] = w;
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n--;
        cout << dp[n]%mod << '\n';
    }
}
