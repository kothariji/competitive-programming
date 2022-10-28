// Name: Raj Kasaudhan
//Github Username : rajksd01

// Leetcode Problem 
//Problem URl : https://leetcode.com/problems/two-sum/


//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.


class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0 ; i<nums.length;i++){
            for(int j = 0; j<nums.length;j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        return new int[]{i,j};
                    }
                }
            }
        }
        return new int[]{-1,-1};
        
    }
}
