class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        vector<int> temp = {1};
        ans.push_back(temp);
        if (numRows == 1)
            return ans;
        temp = {1, 1};
        ans.push_back(temp);
        if (numRows == 2)
            return ans;
        for (int i = 3; i <= numRows; i++)
        {
            vector<int> temp1 = {1};
            for (int j = 0; j < ans[i - 2].size() - 1; j++)
            {
                temp1.push_back(ans[i - 2][j] + ans[i - 2][j + 1]);
            }
            temp1.push_back(1);
            ans.push_back(temp1);
        }
        return ans;
    }
};