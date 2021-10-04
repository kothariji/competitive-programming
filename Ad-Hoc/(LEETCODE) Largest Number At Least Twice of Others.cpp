class Solution {
public:
  int dominantIndex(vector<int>& nums) {
    int max = INT_MIN;
    int ans = 0;

    // searching for max number
    for (int i = 0; i< nums.size(); i++) {
      if (nums[i] > max) {
        max = nums[i];
        ans = i;
      }
    }
    
    for (int i=0; i<nums.size(); i++) {
      if (i == ans) {
        continue;
      }
      
      if (nums[i] * 2 > max) {
        return -1;
      }
    }

    return ans;
  }
};
