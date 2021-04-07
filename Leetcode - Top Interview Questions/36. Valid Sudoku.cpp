class Solution
{
public:
    bool checkSq(vector<vector<char>> &board, int r, int c)
    {
        unordered_set<int> s1;
        int count(0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[r + i][c + j] == '.')
                    continue;
                count++;
                s1.insert(board[r + i][c + j]);
            }
        }
        return count == s1.size();
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<char, int> rows[9], cols[9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                rows[i][board[i][j]]++;
                if (rows[i][board[i][j]] == 2)
                {
                    cout << i << " " << j << endl;
                    return false;
                }
                cols[j][board[i][j]]++;
                if (cols[j][board[i][j]] == 2)
                {
                    cout << i << " " << j << endl;
                    return false;
                }
            }
        }
        if (!checkSq(board, 0, 0) || !checkSq(board, 0, 3) || !checkSq(board, 0, 6) || !checkSq(board, 3, 0) || !checkSq(board, 3, 3) || !checkSq(board, 3, 6) || !checkSq(board, 6, 0) || !checkSq(board, 6, 3) || !checkSq(board, 6, 6))
            return false;
        return true;
    }
};