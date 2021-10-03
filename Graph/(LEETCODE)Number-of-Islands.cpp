class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<bool>> &visited,int r, int c){
        static int dirX[] = { -1, 0 , 0 , 1 }; 
        static int dirY[] = { 0 , 1 , -1, 0 }; 
        visited[r][c] = true;
        for(int i = 0 ; i < 4 ; ++i){
            int nextr = r + dirX[i];
            int nextc = c + dirY[i];
            if(nextr >= 0 && nextr < grid.size() && nextc >= 0 && nextc < grid[0].size() && grid[nextr][nextc] == '1' &&  !visited[nextr][nextc]){
                dfs(grid,visited,nextr,nextc);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if(m == 0) return 0;
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool> > visited(m, vector<bool>(n,false));
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0; j < n; ++j){
                if(grid[i][j] == '1' && !visited[i][j]){
                    dfs(grid,visited,i,j);
                    ++cnt;        
                }
            }
        }
        return cnt;
    }
};