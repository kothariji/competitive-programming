class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0) return "";
        
        int dp[1001][1001]={0};
        int n=s.size(), ans=1;
       
            for(int j=0; j<n; j++){
                 for(int i=0; i<n; i++){
                if(i==j) dp[i][j]++;
                else if(i==j-1 && s[i]==s[j]) dp[i][j]=2;
                else if(i+1<=j-1){
                    if(s[i]==s[j] && dp[i+1][j-1]){
                        dp[i][j]=max(dp[i][j], dp[i+1][j-1]+2);
                    }
                }
                
                ans=max(ans, dp[i][j]);
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dp[i][j]==ans){
                    string res="";
                    for(int k=i; k<=j; k++) res+=s[k];
                    return res;
                }
            }
        }
        return "";
    }        
};
