class Solution 
{
    public int[] productExceptSelf(int[] nums) 
    {
        int[] rmul = Arrays.copyOf(nums, nums.length);
        int[] lmul = Arrays.copyOf(nums, nums.length);
        
        for(int i=1,j = nums.length-2; i< nums.length; i++, j--)
        {
            
            rmul[i] *= rmul[i-1];
            lmul[j] *= lmul[j+1];
        }
        
        for(int i=0;i<nums.length;i++)
        {
            if(i == 0)
            {
                nums[i] = lmul[i+1];
            }
            else if(i == nums.length-1)
            {
                nums[i] = rmul[i-1];
            }
            else
            {
                nums[i] = rmul[i-1] * lmul[i+1];
            }
        }
        
        return nums;
    }
}
