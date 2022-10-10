/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

*/


//WE USE MODIFIED BINARY SEARCH ALGORITHM TO SOLVE THIS PROBLEM.

class Solution {
public:
    
    int helper(vector<int>& nums, int target,int l,int r){
        int mid=(l+r)/2;
        if(l>r){
            return -1;
        }
        if(target==nums[mid]){
            return mid;
        }
        if(nums[l]<=nums[mid]){
            if(target>=nums[l]&&target<=nums[mid]){
                return helper(nums,target,l,mid-1);
            }
            return helper(nums,target,mid+1,r);
        }
        if(target>=nums[mid]&&target <=nums[r]){
            return helper(nums,target,mid+1,r);
        }
        return helper(nums,target,l,mid-1);
        
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        //int mid=(l+h)/2;
        return helper(nums,target,l,h);
    }
};