class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total = accumulate(nums.begin(), nums.end(), 0); 
        if (total % k) return false; 
        int avg = total / k; 
        
        vector<int> sm(k); 
        sort(nums.begin(), nums.end(), [&](auto& lhs, auto& rhs) {return lhs > rhs; }); 
        
        function<bool(int)> fn = [&](int i) {
            if (i == nums.size()) return true; 
            for (int kk = 0; kk < k; ++kk) {
                if (sm[kk] + nums[i] <= avg) {
                    sm[kk] += nums[i]; 
                    if (fn(i+1)) return true; 
                    sm[kk] -= nums[i]; 
                }
                if (sm[kk] == 0) break; 
            }
            return false; 
        }; 
        
        return fn(0); 
    }
};
