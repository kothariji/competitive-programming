/**
 * TrappingRainWater
 * https://leetcode.com/problems/trapping-rain-water/
 */
public class TrappingRainWater {
    int trap(int[] height){
        int n = height.length, ans = 0, maxi = 0, mini = 0;
        // two pointers 
        int i = 0, j = n - 1;
        // pointer i from the left
        // pointer j from the right
        while(i <= j){
            mini = Math.min(height[i], height[j]);
            maxi = Math.max(maxi, mini);
            
            // the units of water being tapped is the diffence between max height and min height
            ans += maxi - mini;
            if(height[i] < height[j])i++;
            else j--;
        }
        return ans;
    }
}
    