class Solution:
    def updateBoard(self, board: List[List[str]], click: List[int]) -> List[List[str]]:
        visited = [[False for j in range(len(board[0]))] for i in range(len(board))]
        
        def dfs(i, j):
            if i < 0 or j < 0 or i >= len(board) or j >= len(board[0]) or visited[i][j] or board[i][j] != 'E':
                return None
            visited[i][j] = True
            res = 0
            for x in range(i - 1, i + 2):
                for y in range(j - 1, j + 2):
                    if x < 0 or y < 0 or x >= len(board) or y >= len(board[0]):
                        pass
                    elif board[x][y] == 'M':
                        res += 1
            if res == 0:
                board[i][j] = 'B'
                dfs(i - 1, j - 1)
                dfs(i, j - 1)
                dfs(i + 1, j - 1)
                dfs(i + 1, j)
                dfs(i + 1, j + 1)
                dfs(i, j + 1)
                dfs(i - 1, j + 1)
                dfs(i - 1, j)
            elif board[i][j].isdigit():
                board[i][j] = str(int(board[i][j]) + res)
            elif board[i][j] == 'E' and res != 0:
                board[i][j] = str(res)

        i = click[0]
        j = click[1]
        if not visited[i][j] and board[i][j] == 'M':
            board[i][j] = 'X'
            return board
        elif not visited[i][j]:
            dfs(i, j)
        return board
