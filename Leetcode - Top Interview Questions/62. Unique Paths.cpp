class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> v1(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                v1[i][j] = v1[i - 1][j] + v1[i][j - 1];
        return v1[m - 1][n - 1];
    }
};