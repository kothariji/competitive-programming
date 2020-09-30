class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 0;
        
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};
