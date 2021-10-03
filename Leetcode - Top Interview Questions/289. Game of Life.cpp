class Solution
{
public:
    int liveMembers(vector<vector<int>> &board, int i, int j, int rows, int cols)
    {
        int total(0);

        //top-left
        if (((i - 1) >= 0) && ((j - 1) >= 0))
            total += board[i - 1][j - 1];

        //up
        if ((i - 1) >= 0)
            total += board[i - 1][j];

        //top right
        if (((i - 1) >= 0) && ((j + 1) < cols))
            total += board[i - 1][j + 1];

        //left
        if ((j - 1) >= 0)
            total += board[i][j - 1];

        //center
        // if ((i - 1) >= 0)
        //     total += board[i - 1][j];

        //left
        if ((j + 1) < cols)
            total += board[i][j + 1];

        //bottom left
        if (((i + 1) < rows) && ((j - 1) >= 0))
            total += board[i + 1][j - 1];

        //down
        if ((i + 1) < rows)
            total += board[i + 1][j];

        //bottom right
        if (((i + 1) < rows) && ((j + 1) < cols))
            total += board[i + 1][j + 1];

        return total;
    }

    void gameOfLife(vector<vector<int>> &board)
    {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<int>> newBoard(rows, vector<int>(cols, -1));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int num = liveMembers(board, i, j, rows, cols);
                if (board[i][j])
                    newBoard[i][j] = (num == 3 || num == 2) ? 1 : 0;
                else
                    newBoard[i][j] = num == 3 ? 1 : 0;
            }
        }
        board = newBoard;
    }
};