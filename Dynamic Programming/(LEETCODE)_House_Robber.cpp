class Solution
{
public:
    int dp[101];
    int func(int i, vector<int> &nums)
    {
        if (i == 0)
            return nums[0];
        if (i == 1)
            return max(nums[0], nums[1]);
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = max(func(i - 1, nums), nums[i] + func(i - 2, nums));
    }
    int rob(vector<int> &nums)
    {
        memset(dp, -1, sizeof(dp));
        return func(nums.size() - 1, nums);
    }
};