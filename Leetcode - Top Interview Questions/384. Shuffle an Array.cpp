class Solution
{
    vector<int> nums;

public:
    Solution(vector<int> nums)
    {
        this->nums = nums;
    }

    vector<int> reset()
    {
        return nums;
    }

    vector<int> shuffle()
    {
        vector<int> ans(nums);
        int i, j;
        for (i = nums.size() - 1; i > 0; i--)
        {
            j = rand() % (i + 1);
            swap(ans[i], ans[j]);
        }
        return ans;
    }
};