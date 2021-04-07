class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int left(0), right(nums.size() - 1);
        int i = 0;
        while (i <= right)
        {
            if (nums[i] == 0)
            {
                nums[i] = 1;
                nums[left] = 0;
                left++, i++;
            }
            else if (nums[i] == 2)
            {
                nums[i] = nums[right];
                nums[right] = 2;
                right--;
            }
            else
                i++;
        }
    }
};