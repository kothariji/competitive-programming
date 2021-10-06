class Solution:
    def reverse(self, x: int) -> int:
        flag = 1
        if x < 0:
            x = x*(-1)
            flag = -1
        num = int(str(x)[::-1])
        if num >= (2**31)-1:
            return 0
        return num*flag