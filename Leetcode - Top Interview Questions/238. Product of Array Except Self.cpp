class Solution
{
public:
    int mul(vector<int> nums, int idx)
    {
        int ans = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != idx)
                ans *= nums[i];
        }
        return ans;
    }
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        int ans = mul(nums, -1);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                res.push_back(mul(nums, i));
            else
                res.push_back(ans / nums[i]);
        }
        return res;
    }
};