#include <bits/stdc++.h>
using namespace std;


int N = 1E3+7;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n), mx2(k+1, 0);
        vector<vector<int>> dp(n+1, vector<int>(k+1, 1)), mx(N, vector<int>(k+1, 0));

        for(int i =0 ;i<n;i++){
            cin >> v[i];
        }
        
        for(int j = 0;j<=k;j++){
            mx[v[n-1]][j] = 1;
            mx2[j] = 1;
        }

        for(int i = n-2;i>=0;i--){
            for(int j = 0;j<=k;j++){
                if(j == 0)dp[i][j] = max(dp[i][j], 1 + mx[v[i]][j]);
                else{
                    dp[i][j] = max(dp[i][j], 1 + mx[v[i]][j]);
                    dp[i][j] = max(dp[i][j], 1 + mx2[j-1]);                    
                }
            }

            for(int j = 0;j<=k;j++){
                mx[v[i]][j] = dp[i][j];
                mx2[j] = max(mx2[j], dp[i][j]);
            }
        }
        cout << mx2[k] << endl;
    }
}
