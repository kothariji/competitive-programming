class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int prevByOne=0;
        int prevByTwo=0;
        for (int i=0; i<nums.size(); i++) {
            int cur=max(nums[i]+prevByTwo, prevByOne);
            prevByTwo=prevByOne;
            prevByOne=cur;
        }
        return prevByOne;
    }
};
