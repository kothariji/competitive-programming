class Solution {
   
public:
    using ll  = long long;
    
    
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        int n  = stations.size();
        ll dp[n+1][n+1];
        if(n==0){
            if(target<=startFuel) return 0 ;
            else return -1;
        }
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]  = -1e18;
            }
        }
        dp[0][0] = startFuel; 
        int a[n+1];
        int b[n+1];
        a[0] = 0;
        b[0] = 0;
        
        for(int i=0;i<n;i++){
            a[i+1] = stations[i][0];
            b[i+1] = stations[i][1];
        }
        if(a[1]>startFuel) return -1;
        dp[1][0] = startFuel - a[1];
        for(int i=1;i<n;i++){
            for(int j=0 ; j<i;j++){
                if(dp[i][j]<0) continue;
                    int k = i+1;
                    if(a[k]-a[i]<=dp[i][j])
                            dp[k][j] = max(dp[k][j],dp[i][j]-a[k]+a[i]);
                    if(b[i]+dp[i][j]>=a[k]-a[i])
                        dp[k][j+1] = max(dp[k][j+1],b[i]+dp[i][j]-a[k]+a[i]);
                
                
            }
        }
        
        int ans = 1e9;
        for(int j=0;j<=n;j++){
            if(dp[n][j]>=target-a[n]){
                ans = min(ans,j);
               
            }
            if(dp[n][j]+b[n]>=target-a[n]) 
                ans = min(ans,j+1);
        }
        if(ans<1e9) return ans;
        else return -1;
    }
};
