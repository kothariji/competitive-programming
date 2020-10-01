class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        if(m==0) return 0;
        
        int n=grid[0].size();
        int INF=10000;
        vector<vector<int>> dp(m+1, vector<int>(n+1, INF));
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(i==1 && j==1) dp[i][j]=grid[i-1][j-1];
                else if(i==1){
                    dp[i][j]=dp[i][j-1]+grid[i-1][j-1];
                }else if(j==1){
                    dp[i][j]=dp[i-1][j]+grid[i-1][j-1];
                }else
                dp[i][j]=min(dp[i][j], min(dp[i-1][j], dp[i][j-1]))+grid[i-1][j-1];
            }
        }
        
        return dp[m][n];
        
    }
};
