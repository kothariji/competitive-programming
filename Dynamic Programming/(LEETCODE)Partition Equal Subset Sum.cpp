class Solution {
public:
    
    bool dp(vector<vector<int>> &memo, vector<int> &nums, int ind, int req){
        if(req==0) return true;
        if(ind>=nums.size()|| req<0 ) return false;
        
        if(memo[ind][req]!=-1) return memo[ind][req];
        
        int &res = memo[ind][req];
        if(dp(memo, nums, ind+1, req)) res= true;
        else if(dp(memo, nums, ind+1, req-nums[ind])) res= true;
        else res= false;
        return res;
    }
    
    bool canPartition(vector<int>& nums) {
        if(nums.size()==0){
            return true;
        }
        
        int sum=accumulate(nums.begin(), nums.end(), 0);
        
        if(sum%2) return false;
        
        int req = sum/2;
        vector<vector<int>> memo(nums.size(), vector<int>(sum+1, -1));
        return dp(memo, nums, 0, req);
    }
};
