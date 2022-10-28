public class ClimbingStairs {
    
       public static void main(String[] args) {
        int n = 3;
        int dp[] = new int[n+1];
        
         
         dp[0] = 1;
         for(int i = 1 ; i<=n; i++){
             dp[i] = dp[i-1];
             if(i-2 >=0) dp[i] += dp[i-2];
         }
         
   System.out.print(dp[n]);
       }
     
}
