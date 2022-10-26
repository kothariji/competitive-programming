class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if (nums.size()<0)
          return 0;
          
        int run_sum = nums[0];
        int max_sum = nums[0];
        
        for (int i=1; i<nums.size(); i++)
        {
                        
            if (run_sum < 0)
            {
                run_sum = 0;
            }
            run_sum = run_sum + nums[i];
            if (run_sum > max_sum)
            {
                max_sum = run_sum;
            }
                
        }
        
        return max_sum;
    }
};