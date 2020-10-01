class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = *max_element(nums.begin(), nums.end()), sum=0;
        for(int i=0; i<n; i++){
            if((sum + nums[i]) > 0){
                sum += nums[i];
                ans=max(ans, sum);
            }else{
                sum=0;
            }
        }
        return ans;
    }
};
