int getDistinct(vector<vector <int> > &dp, string A, string B, int i,int j)
{
    if(j==B.size())
    {
        return 1;
    }
    else if(i==A.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(A[i]==B[j])
    {
        dp[i][j]=getDistinct(dp,A,B,i+1,j)+getDistinct(dp,A,B,i+1,j+1);
        
    }
    else
    {
        dp[i][j]=getDistinct(dp,A,B,i+1,j);
    }
    return dp[i][j];
}

int Solution::numDistinct(string A, string B) {
    int n=A.size();
    int m=B.size();
    vector<vector <int> > dp(n+1,vector<int>(m+1,-1));
    return getDistinct(dp,A,B,0,0);
}
