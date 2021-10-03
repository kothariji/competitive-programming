class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        dp = [0]*(len(s)+1)
        wordDict = set(wordDict)
        dp[0]=1
        for i in range(1,len(s)+1):
            for j in range(i-1,-1,-1):
                if dp[j] and s[j:i] in wordDict:
                    dp[i]=1
                    break
        return dp[-1]

