# Non dynamic Solution yet faster

class Solution(object):
    def searchfrommid(self,i,j,s):
        while i >= 0 and j < len(s):
            if s[i] != s[j]:
                break
            i -= 1
            j += 1
            
        return j - i - 1
            
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        max_len = 0
        start = 0
        end = 0
        for i in range(len(s)):
            len1 = self.searchfrommid(i,i,s)
            len2 = self.searchfrommid(i,i+1,s)
            if len1 > max_len:
                max_len = len1
                start = i - len1//2
                end = i + len1//2 + 1
                
            if len2 > max_len:
                max_len = len2
                start = i - len2/2 + 1
                end = i + len2/2 + 1
                
        return s[start:end]
            