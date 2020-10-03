class Solution:
    def calculateMinimumHP(self, dungeon: List[List[int]]) -> int:
        n = len(dungeon)
        m = len(dungeon[0])
        dp = [[0 for i in range(m)] for j in range(n)]
        dp[n-1][m-1] = 1 if dungeon[n-1][m-1]>0 else abs(dungeon[n-1][m-1])+1
           
        
        for i in range(n-1,-1,-1):
            for j in range(m-1,-1,-1):
                if i==n-1 and j==m-1:
                    continue
                else:
                    if i==n-1:
                        dp[i][j] = max(dp[i][j+1]-dungeon[i][j],1)
                        
                    elif j==m-1:
                        dp[i][j] = max(dp[i+1][j]-dungeon[i][j],1)
                        
                    else:
                        dp[i][j] = max(min(dp[i+1][j],dp[i][j+1])-dungeon[i][j],1) 
        # print(dp)
                                   
        return dp[0][0]
