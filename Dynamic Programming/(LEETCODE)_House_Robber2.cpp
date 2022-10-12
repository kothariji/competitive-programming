class Solution
{
public:
    int dp[101][2];
    int func(int i, int j, vector<int> &nums)
    {
        if (j == 0)
        {
            if (i == 0)
                return nums[i];
            if (i == 1)
                return max(nums[i], nums[i - 1]);
        }
        else
        {
            if (i == 1)
                return nums[i];
            if (i == 2)
                return max(nums[i], nums[i - 1]);
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] = max(func(i - 1, j, nums), func(i - 2, j, nums) + nums[i]);
    }
    int rob(vector<int> &nums)
    {
        memset(dp, -1, sizeof(dp));
        if (nums.size() < 3)
        {
            return *max_element(nums.begin(), nums.end());
        }
        return max(func(nums.size() - 1, 1, nums), func(nums.size() - 2, 0, nums));
    }
};