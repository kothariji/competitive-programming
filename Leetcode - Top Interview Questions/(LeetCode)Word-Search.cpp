class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()) return false;
        h = board.size();
        w = board[0].size();
        for(int i = 0; i<h; ++i) {
            for(int j = 0; j<w; ++j)
            if(search(board, word, 0, i, j)) return true;
        }
        return false;
    }
private:
    int w, h;
    
    bool search(vector<vector<char>>& board, string& word, int d, int i, int j) {
        if(i<0 || j<0 || i>=h || j>=w || board[i][j]!=word[d]) return false;
        if(d == word.size()-1) return true;
        char cur = board[i][j];
        board[i][j] = '0';
        bool found = search(board, word, d+1, i+1, j) 
                  || search(board, word, d+1, i-1, j)
                  || search(board, word, d+1, i, j+1)
                  || search(board, word, d+1, i, j-1);
        board[i][j] = cur; 
    }
};
