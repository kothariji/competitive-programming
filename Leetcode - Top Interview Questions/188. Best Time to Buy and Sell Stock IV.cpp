class Solution {
public:
    int dp[1002][2][102];
    int maxProfit(int k, vector<int>& prices) {

        for(int i=0;i<=1000;i++){
            for(int j=0;j<=1;j++){
                for(int k = 0; k<=100; k++){
                    dp[i][j][k]=-1000000000;
                }
            }
        }

        int n=prices.size();
        dp[0][0][0]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                // on ith day we are having j transactions
                if(j!=0){
                    dp[i][0][j] = max(dp[i-1][1][j-1]+prices[i-1], dp[i-1][0][j]);
                }
                else{
                    dp[i][0][j] = dp[i-1][0][j];
                }
                dp[i][1][j] = max(dp[i-1][1][j], dp[i-1][0][j]-prices[i-1]);
                
            }
        }
        int ans =0;    
        for(int i=0;i<=k;i++)
        {
            ans = max(ans, dp[n][0][i]);
            ans = max(ans, dp[n][1][i]);
        }

        return ans;
    }
};
