class Solution {
public:
    
    bool visited[1005];
    bool ans;
    int color[1005];
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        
        
		memset(color, 0, sizeof(color));
		memset(visited, false, sizeof(visited));
        
        int flag= 0;
		ans = true;
		for(int i = 0; i<graph.size(); i++)
		{
			if(visited[i] == false)
				DFS(i, graph, true);
			if(ans == false)
			{
				flag =1;
				break;
			}
		}

		if(flag)
			return false;
		return true;
        
    }
    
    
    void DFS(int i, vector<vector<int>>& v1, bool col)
    {
        if(visited[i] == false)
        {
            visited[i] = true;
            color[i] = col ? 1 : 2;
            for(int j = 0; j < v1[i].size(); j++)
            DFS(v1[i][j], v1, !col);
        }
        else if(((color[i] == 1) && (col == false)) ||((color[i] == 2) && (col == true)) )
            ans = false;

    }
    
    
};

