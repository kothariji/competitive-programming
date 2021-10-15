class Solution {
public:
    bool divisorGame(int n) {
        bool dp[n+1];
        dp[0]=false;
        dp[1]=false;
        for(int i=1; i<=n; i++){
            //find factors of i
            vector<int> f;
            for(int j=1; j<=i/2; j++){
                if(i%j==0){
                    f.push_back(j);
                }
            }
            bool ans=false;
            for(auto x: f){
                if(dp[i-x]==false){
                    ans=true;
                }
            }
            dp[i]=ans;
        }
        return dp[n];
    }
};
