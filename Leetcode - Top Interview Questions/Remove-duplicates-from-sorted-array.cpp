class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int i=0,n=nums.size(),greater_than=0,size;
        while(i<n)
        {
            
            size=greater_than+1;
            i++;
            while(i<n && nums[i]<=nums[greater_than])
                i++;
            if(i<n)
            {
                swap(nums[size],nums[i]);
                greater_than=size;
            }
            
        }
        return size;
    }
};
