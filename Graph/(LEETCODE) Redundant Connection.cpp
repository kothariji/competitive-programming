class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parents(edges.size()+1);
        fill(parents.begin(),parents.end(),-1);
        vector<vector<int>> redges;
        for(auto e:edges){
            
            int pu=e[0],pv=e[1];
            while(parents[pu]!=-1){
                pu=parents[pu];
            }
            while(parents[pv]!=-1){
                pv=parents[pv];
            }
            
           if(pu==pv){
               redges.push_back(e);
           }else{
               parents[pu]=pv;
           } 
        }
        return redges[redges.size()-1];
    }
};

