class Solution
{
public:
    void generate(vector<int> &nums, vector<vector<int>> &v1, vector<int> ans, int idx)
    {
        if (idx >= nums.size())
        {
            v1.push_back(ans);
            return;
        }
        generate(nums, v1, ans, idx + 1);
        ans.push_back(nums[idx]);
        generate(nums, v1, ans, idx + 1);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> v1;
        vector<int> ans;
        generate(nums, v1, ans, 0);
        return v1;
    }
};