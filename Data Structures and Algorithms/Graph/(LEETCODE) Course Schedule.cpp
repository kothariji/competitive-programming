class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector < vector <int> > v1(numCourses);
        vector <bool> visited(numCourses, false);
        
        for(auto c: prerequisites)
        {
            v1[c[0]].push_back(c[1]);
        }
        
        for(int i =0 ; i<numCourses; i++)
        {
            if(visited[i] == false)
                if(DFS(i,v1,visited) == false)
                    return false;
        }
        return true;
    }
    
    
    bool DFS(int i, vector<vector<int>>& v1, vector<bool>& visited)
    {
        if(visited[i] == true)
            return false;
        visited[i] = true;
        for(int j = 0; j <v1[i].size(); j++)
            if(DFS(v1[i][j],v1,visited) == false)
                    return false;
        visited[i] = false;
        return true;
    }
};