class Solution {
 struct node{
    int x;
    int y;
    node(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
};
 public:
  int visited[1000][1000];
void bfs(int i,int j,int n,int m,vector<vector<char>>& grid)
{
    queue<node>q;
    q.push(node(i,j));
    visited[i][j]=1;
    cout<<i<<" "<<j<<endl;
    while(!q.empty())
    {
        int a=q.front().x;
        int b=q.front().y;
        q.pop();
        cout<<a<<" "<<b<<endl;
        int ar1[4]={1,0,-1,0};
        int ar2[4]={0,-1,0,1};
        for(int k=0;k<4;k++)
        {
            int c=a+ar1[k];
            int d=b+ar2[k];
        
            if(c>=0 && c<n && d>=0 && d<m && visited[c][d]==0)
            {
                visited[c][d]=1;
                q.push(node(c,d));
            }
        }
    }
}
int numIslands(vector<vector<char>>& grid) {
   int n=grid.size();
   int m=grid[0].size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1')
            {
                visited[i][j]=0;
            }
            else{
                visited[i][j]=1;
            }
        }
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1' && visited[i][j]==0)
            {
              bfs(i,j,n,m,grid); 
                count++;
            }
        }
    }
    
   return count; 
}};