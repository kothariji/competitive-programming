class Solution 
{
    public int removeDuplicates(int[] nums) 
    {
        int prev_unique = 0;
        for (int i=1;i<nums.length;i++)
        {
            if(nums[i] == nums[prev_unique])
            {
                //ignore
            }
            else
            {
                nums[prev_unique + 1] = nums[i];
                prev_unique ++;
            }
        }
        
        return prev_unique + 1;
    }
}
