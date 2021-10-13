class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i, n = nums.size();
        for (i = 0; i < n; i++)
        {
            // if number greatr than target or equal then it break the loop
            // retun the the value of i

            // if elemnt is greater than array element then
            // return i which is the size of array
            
            if (nums[i] >= target)
            {
                break;
            }
        }
        return i;
      
    }
};
