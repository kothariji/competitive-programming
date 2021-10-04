class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
    
        int num = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    if (i == 0 || grid[i - 1][j] == 0) num++; // UP
                    if (j == 0 || grid[i][j - 1] == 0) num++; // LEFT
                    if (i == rows -1 || grid[i + 1][j] == 0) num++; // DOWN
                    if (j == cols -1 || grid[i][j + 1] == 0) num++; // RIGHT
                }
            }
        }
        return num;
    }
};

// Counting edges adjacent to water.