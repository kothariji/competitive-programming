class Solution {
  solve(nums, k) {
    const toShift = [];

    for (let x = 0; x < k; x++) {
      toShift.push(nums[x]);
    }

    for (let x = 0; x < nums.length - k; x++) {
      nums[x] = nums[x + k];
    }

    for (let x = nums.length - k, y = 0; x < nums.length; x++, y++) {
      nums[x] = toShift[y];
    }

    return nums;
  }
}
