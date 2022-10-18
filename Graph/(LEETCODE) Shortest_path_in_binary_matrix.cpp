class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), len = 1;
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        if(n==1) return 1;
        
        vector<vector<int>> off = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0] = 1;
        
        int sz, row, col, i, j;
        
        while(!q.empty()){
            sz = q.size();
            for(i = 0; i < sz; i++){
                row = q.front().first, col = q.front().second;
                q.pop();
                
                if(row == n-1 && col == n-1) return len;
                
                for(j = 0; j < 8; j++){
                    int x = row + off[j][0], y = col + off[j][1];
                    if(x >= 0 && y >= 0 && x < n && y < n && grid[x][y] == 0){
                        grid[x][y] = 1;
                        q.push({x,y});
                    }
                }
                
            }
            len++;
        }
        
        return -1;
    }
};