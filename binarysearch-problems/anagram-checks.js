// Link to problem - https://binarysearch.com/problems/Anagram-Checks

class Solution {
  solve(s0, s1) {
      if (s0.length !== s1.length) return false;

      const chars1 = s0.split('').sort();
      const chars2 = s1.split('').sort();

      for (let x = 0; x < chars1.length; x++) {
          if (chars1[x] !== chars2[x]) return false;
      }

      return true;
  }
}