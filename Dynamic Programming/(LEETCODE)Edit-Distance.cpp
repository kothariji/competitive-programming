class Solution {
public:
    
    int dp( vector<vector<int>> &memo, string &a, string &b, int i, int j){
        if(j>=b.size()) return a.size()-i;
        
        if(i>=a.size()) return b.size()-j;
        
        else{
            if(memo[i][j]!=-1) return memo[i][j];
            int &ans = memo[i][j];
            if(a[i]==b[j]) ans=dp(memo, a, b, i+1, j+1);
            else{
                ans=min(dp(memo, a, b, i+1, j)+1, min(dp(memo, a, b, i+1, j+1)+1, dp(memo, a, b, i, j+1)+1) );
            }
            
            return ans;
        }
    }
    
    int minDistance(string word1, string word2) { 
        if(word1.size()==0) return word2.size();
        else if(word2.size()==0) return word1.size();
        vector<vector<int>> memo(word1.size(), vector<int>(word2.size(), -1));
        return dp(memo, word1, word2, 0, 0);
    }
};
