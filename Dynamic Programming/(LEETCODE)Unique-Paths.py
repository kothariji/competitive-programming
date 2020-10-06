class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        mat  = [[0]*(m) for i in range(n)]
        
        for i in range(n-1,-1,-1):
            for j in range(m-1,-1,-1):
                if i==n-1 and j==m-1:
                    mat[i][j]=0
                if i==n-1 or j==m-1:
                    mat[i][j] =1
                else:
                    mat[i][j] = mat[i+1][j] + mat[i][j+1]
                    
        return mat[0][0]
