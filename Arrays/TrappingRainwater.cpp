//This is the two-pointer approach to trapping rainwater problem on leetcode
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, ans = 0, left_max = 0, right_max = 0;
        while(left < right)
        {
            if(height[left] < height[right])
            {
                (height[left] >= left_max) ? (left_max = height[left]) : ans += (left_max - height[left]);
                left++;
            } else{
                height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
    }
};