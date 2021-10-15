class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int i, n = nums.size();
        
        //if we have empty array then return 0
        if (n == 0)
        {
            return 0;
        }

        int k = 1;
        for (i = 0; i < n - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[k] = nums[i + 1];
                k++;
            }
        }
        return k;
    }
};
