class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xored = 0;
        for (auto c : nums)
            xored ^= c;
        return xored;
    }
};