class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s

        res = ""
        for r in range(numRows):
            inc = 2*(numRows-1)
            for i in range(r, len(s), inc):
                res = res+s[i]
                if(r > 0 and r < numRows - 1 and i + inc - 2 * r < len(s)):
                    res = res+s[i+inc-2*r]

        return res
