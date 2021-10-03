class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        for (int c : nums)
        {
            if (c == 0)
                break;
            i++;
        }
        int j = i + 1;
        while (i < nums.size() && j < nums.size())
        {
            if (nums[j] != 0)
            {
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                while (i < nums.size())
                {
                    if (nums[i] == 0)
                        break;
                    i++;
                }
            }
            j++;
        }
    }
};