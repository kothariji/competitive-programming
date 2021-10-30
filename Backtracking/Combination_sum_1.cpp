class Solution {
public:
    void dfs(int ind, int t, vector<int> v, vector<int> &ar, vector<vector<int>> &ans){
        if(t < 0) return;
        if(t == 0){
            ans.push_back(v);
            return;
        }
        if(ind < 0) return;
        
        if(ar[ind] <= t){
            v.push_back(ar[ind]);
            dfs(ind, t - ar[ind], v, ar, ans);
            v.pop_back();
        }
        
        dfs(ind - 1, t, v, ar, ans);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        // sort(candidates.begin(), candidates.end());
        
        dfs(candidates.size() - 1, target, {}, candidates, ans);
        
        return ans;
    }
};