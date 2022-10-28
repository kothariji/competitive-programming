/**
 * MedianSortedArrays
 * https://leetcode.com/problems/median-of-two-sorted-arrays/
 */
public class MedianSortedArrays {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int ind1 = 0, ind2 = 0, mid1 = 0, mid2 = 0;
        
        for (int i=0; i<=(nums1.length + nums2.length)/2; i++) {
            mid1 = mid2;
            if (ind1 == nums1.length) {
                mid2 = nums2[ind2];
                ind2++;
            } 
            else if (ind2 == nums2.length) {
                mid2 = nums1[ind1];
                ind1++;
            } 
            else if (nums1[ind1] < nums2[ind2] ) {
                mid2 = nums1[ind1];
                ind1++;
            }
            else {
                mid2 = nums2[ind2];
                ind2++;
            }
        }

        // the median is the average of two numbers
        if ((nums1.length+nums2.length) % 2 == 0) {
            return (float)(mid1 + mid2)/2;
        }

        return mid2;
    }    
}