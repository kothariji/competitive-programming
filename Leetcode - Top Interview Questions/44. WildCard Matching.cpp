//important DP problem asked in many interviews.
//problem : https://leetcode.com/problems/wildcard-matching
class Solution {
public:
    int n,m;
    string s,p;
    vector<vector<int>> dp;
    bool solve(int i,int j)
    {
        //base case
        if(i==n && j==m) return true; 
        if(i<n && j==m) return false;
        if(dp[i][j] != -1) return dp[i][j];
        if(i==n && j<m) //if all remaining are stars then possible
        {
            for(int k=j;k<m;k++) if(p[k]!='*')return dp[i][j] = false;
            return dp[i][j] = true;
        }
        
        //recurrance        
        if(s[i]==p[j]){
            return dp[i][j] = solve(i+1,j+1);
        }
        else if(p[j]=='?'){
            return dp[i][j] = solve(i+1,j+1);
        }
        else if(p[j]=='*'){
            //3 cases
            //replace * with char s[i]
            //put s[i] but keep * for next chars
            //skip *
            return dp[i][j] = solve(i+1,j+1)||solve(i+1,j)||solve(i,j+1);
        }
        else
            return dp[i][j] = false;
    }
    bool isMatch(string str, string pattern) {
        
        n = str.size();
        m = pattern.size();
        s = str;
        p = pattern;
        dp.resize(n+1,vector<int>(m+1,-1));
        return solve(0,0);
        
    }
};
