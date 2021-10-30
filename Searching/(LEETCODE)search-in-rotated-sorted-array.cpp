// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    
  int calcMid(int left, int right) {
    return left + (right - left)/2;
  }
  
  bool isBorder(vector<int>& nums, int i) {
    if(nums[i] > nums[i+1])
      return true;
    return false;
  }

  int binarySearch(vector<int>& nums, int left, int right, int target) {
    int i = calcMid(left, right);
    while(nums[i] != target) {
      if(nums[i] < target)
        left = i;
      else
        right = i;
      
      i = calcMid(left, right);
      if(right - left < 2 && nums[i] != target) {
        if(nums[left] == target)
          return left;
        else if(nums[right] == target)
          return right;
        else {
          i = -1;
          break;  
        }
      }
    }
    return i;
  }
  
  int findArrayBorder(vector<int>& nums, int left, int right) {
    int firstListMax = nums[nums.size()-1];
    int i = calcMid(left, right);
    while(!isBorder(nums, i)) {
      if(nums[i] < firstListMax)
        right = i;
      else
        left = i;
      
      i = calcMid(left, right);
    }
    return i;
  }

  int search(vector<int>& nums, int target) {
    // edge cases:
    if(target == nums[nums.size()-1])
      return nums.size()-1;
    if(target == nums[0])
      return 0;
    if(nums.size() == 1)
      return -1;
    
    int length = nums.size();
    int firstListBegin = 0, firstListEnd;
    int secondListBegin, secondListEnd = length - 1;
    int targetIdx = -1;
    
    //check whether the array has been rotated
    if(nums[0] > nums[length-1]) {
      firstListEnd = findArrayBorder(nums, 0, length-1);
      secondListBegin = firstListEnd + 1;
      
      //edge case
      if(secondListBegin == secondListEnd) {
        if(target == nums[secondListBegin])
          return secondListBegin;
        targetIdx = binarySearch(nums, 0, firstListEnd, target);
      }
      else if(target <= nums[secondListEnd]) {
        // list 2
        targetIdx = binarySearch(nums, secondListBegin, secondListEnd, target);
      }
      else {
        // list 1
        targetIdx = binarySearch(nums, 0, firstListEnd, target);
      }
    }
    else {
      targetIdx = binarySearch(nums, 0, length - 1, target);
    } 
    
    return targetIdx;
  }
};