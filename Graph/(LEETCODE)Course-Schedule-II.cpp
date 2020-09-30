class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
       if(pre.size()==0){
            vector<int> res(n);
           for(int i=0; i<n; i++) res[i]=i;
           return res;
        }
        vector<vector<int>> adj(n);
        vector<int> indeg(n, 0);
        for(int i=0; i<pre.size(); i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            indeg[pre[i][0]]++;
        }
        
        queue<int> q;
        for(int i=0; i<n; i++){
            if(indeg[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int tp = q.front();
            q.pop();
            ans.push_back(tp);
            for(auto c: adj[tp]){
                indeg[c]--;
                if(indeg[c]==0) q.push(c);
            }
            
        }
        
        if (ans.size()==n){
            return ans;
        }else{
            return vector<int>(0);
        }
    }
};
