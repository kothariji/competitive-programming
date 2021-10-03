class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int xored = 0;
        for (int c : nums)
            xored ^= c;
        for (int i = 1; i <= nums.size(); i++)
            xored ^= i;
        return xored;
    }
};