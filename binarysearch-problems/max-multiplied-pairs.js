class Solution {
  solve(nums, multipliers) {
    let sum = 0;
    nums.sort((a, b) => a - b);
    multipliers.sort((a, b) => a - b);

    while (nums.length && multipliers.length) {
      const left = nums[0] * multipliers[0];
      const right = nums[nums.length - 1] * multipliers[multipliers.length - 1];

      if (left > right) {
        sum += left;
        nums.shift();
        multipliers.shift();
      } else {
        sum += right;
        nums.pop();
        multipliers.pop();
      }
    }

    return sum;
  }
}
