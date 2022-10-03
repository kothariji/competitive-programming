#include <bits/stdc++.h>
using namespace std;
#define int long long
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
 
#define forl(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define fore(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define foreach(a, b) for (auto &(a) : (b))
#define reset(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
 
const char newl = '\n';
const int N = 2e5 + 10;
const int mod = 1e9+7;
const ll inf = 2e18;
 
void solve(){
    int n,m,q;cin>>n>>m>>q;
    vvi dp(n,vi (n,inf));
    forl(i,0,m){
        int a,b,c;cin>>a>>b>>c;
        --a,--b;
        dp[a][b] = min(dp[a][b], c);
        dp[b][a] = min(dp[b][a], c);
    } 
    forl(i,0,n) dp[i][i] =0;
    for(int k = n-1; k>=0;k--){
        for(int i = 0; i<n;i++){
            for(int j = 0 ;j<n;j++){
                if(dp[i][k] !=inf && dp[k][j]!=inf){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
    }
    
 
    while(q--){
        int a,b;cin>>a>>b;
        --a,--b;
        if(dp[a][b] == inf) cout << -1 << newl;
        else cout << dp[a][b] << newl;
    }
 
 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
        solve();
    
    return 0;
}
