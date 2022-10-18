class Solution {
public:
    void dfs(int ind, int t, vector<int> v, vector<int> &ar, vector<vector<int>> &ans){
        if(t < 0) return;
        if(t == 0){
            ans.push_back(v);
            return;
        }
        if(ind >= ar.size()) return;
        
        for(int i = ind; i < ar.size(); i++){
            if((i != ind && ar[i] == ar[i-1] ) || ar[i] > t) continue;
            v.push_back(ar[i]);
            dfs(i + 1, t - ar[i], v, ar, ans);
            v.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        
        dfs(0, target, {}, candidates, ans);
        
        return ans;
    }
};