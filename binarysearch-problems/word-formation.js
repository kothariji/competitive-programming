class Solution {
  solve(words, letters) {
    let maxLen = 0;
    for (let x = 0; x < words.length; x++) {
      let curWord = words[x].split("");
      const lettersCpy = letters.split("");

      const isValid = curWord.every((char) => {
        const charIdx = lettersCpy.indexOf(char);
        if (charIdx == -1) return false;
        lettersCpy.splice(charIdx, 1);

        return true;
      });

      if (isValid && curWord.length > maxLen) {
        maxLen = curWord.length;
      }
    }

    return maxLen;
  }
}
