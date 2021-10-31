class Solution {
public:
    void dfs(vector<int> v, vector<int> &nums, unordered_map<int, int> &mp, vector<vector<int>> &ans){
        if(v.size() == nums.size()){
            ans.push_back(v);
            return;
        }
        
        for(auto i : mp){
            if(i.second > 0){
                v.push_back(i.first);
                mp[i.first]--;
                
                dfs(v, nums, mp, ans);
                
                mp[i.first]++;
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        
        dfs({}, nums, mp, ans);
        
        return ans;
    }
};