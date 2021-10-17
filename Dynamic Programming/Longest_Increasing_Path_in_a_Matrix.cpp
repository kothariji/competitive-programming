// Problem Description:- Longest_Increasing_Path_in_a_Matrix
// Link:- https://leetcode.com/problems/longest-increasing-path-in-a-matrix/


class Solution {
public:
    int dp[201][201];
    bool issafe(int i , int j, int m, int n)
    {
        return (i >= 0 && j >= 0 && i < m && j < n);
    }
    int helper(vector<vector<int>> &g, int last, int i, int j, int &m , int &n)
    {
        if(!issafe(i, j, m, n))return 0;
        if(g[i][j] <= last)return 0;
        if(dp[i][j] != -1)return dp[i][j] ;
        int res1 = max(helper(g, g[i][j], i - 1, j , m, n), helper(g, g[i][j], i, j + 1, m, n));
        int res2 = max(helper(g, g[i][j], i + 1, j , m, n), helper(g, g[i][j], i, j - 1, m, n));
        dp[i][j] = 1 + max(res1, res2);
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int res = INT_MIN;
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i < m ; i++)
        {
            for(int j = 0; j < n; j++)
            {
                res = max(res, helper(matrix, INT_MIN, i, j, m, n));
            }
        }
        return res;
    }
};
