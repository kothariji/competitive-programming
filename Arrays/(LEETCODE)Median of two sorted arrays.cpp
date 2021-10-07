/*
https://leetcode.com/problems/median-of-two-sorted-arrays/
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000


*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i,j;
        i = 0;
        for( j = 0; i<nums1.size()&&j<nums2.size();)
        {
            if(nums1[i]<nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
               res.push_back(nums2[j]);
                j++;
            }
            else
            {
                res.push_back(nums1[i]);
                res.push_back(nums2[j]);
                i++; j++;
            }
        }
        while(i<nums1.size())
            res.push_back(nums1[i++]);
        while(j<nums2.size())
            res.push_back(nums2[j++]);
            int l = res.size();
            if(l%2)
                return res[l/2];
            return (double)(res[l/2] + res[(l/2)-1])/2; 
       
        
    }
};
