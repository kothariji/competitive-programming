class Solution {
public:
    
    void dfs(int src, int par, vector<int> &depth, vector<vector<int>> &adj){
        for(auto c: adj[src]){
            if(c!=par){
                depth[c]=depth[src]+1;
                dfs(c, src, depth, adj);
            }
        }        
    }
    
    void dfs2(int src, int par, vector<int> &parent, vector<int> &depth, vector<vector<int>> &adj){
        for(auto c: adj[src]){
            if(c!=par){
                parent[c]=src;
                depth[c]=depth[src]+1;
                dfs2(c, src, parent,  depth, adj);
            }
        }        
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(edges.size()==0){
            return vector<int>{0};
        }
        vector<vector<int>> adj(n);
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> depth(n, 0);
        dfs(0, -1, depth, adj);
        int node1=-1, maxH=-1;
        for(int i=0; i<n; i++){
            if(depth[i]>maxH){
                maxH=depth[i];
                node1=i;
            }
        }
        
        depth.clear();
        depth.assign(n, 0);
        vector<int> parent(n, -1);
        dfs2(node1, -1, parent, depth, adj);
        
        int node2=-1;
        maxH=-1;
        for(int i=0; i<n; i++){
            if(depth[i]>maxH){
                maxH=depth[i];
                node2=i;
            }
        }
        
        vector<int> diam;
        int cur=node2;
        while(cur!=node1){
            diam.push_back(cur);
            cur=parent[cur];
            
        }
        diam.push_back(node1);
        vector<int> ans;
        if(diam.size()%2){
            ans.push_back(diam[diam.size()/2]);
        }else{
            ans.push_back(diam[diam.size()/2]);
            ans.push_back(diam[(diam.size()/2) - 1]);
            
        }
        
       
        
        return ans;
        
    }
};
