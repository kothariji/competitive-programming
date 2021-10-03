/****************
 *
 *      Rotation (90 deg clockwise) == Transpose + Reverse rows
 *  
 ***************/

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        for (vector<int> &c : matrix)
            reverse(c.begin(), c.end());
    }
};