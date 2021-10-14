class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int result=nums[0] ;
        int maxEnd=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            maxEnd=max(maxEnd+nums[i],nums[i]);
            
            result=max(result,maxEnd);
        }
        return result;
    }
};
