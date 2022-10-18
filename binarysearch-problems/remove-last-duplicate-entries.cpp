// Link to problem - https://binarysearch.com/problems/Remove-Last-Duplicate-Entries
// Status - accepted ✅

vector<int> solve(vector<int>& nums) {
    unordered_map<int, pair<int,int>> mp;
    vector<int> res;
    for(int i = 0; i< nums.size(); i++) {
       mp[nums[i]].first = i;
       mp[nums[i]].second++;
    }
    for(int i = 0; i < nums.size(); i++) {
       if(mp[nums[i]].second == 1 || mp[nums[i]].first != i) {
           res.push_back(nums[i]);
       }
    }
    return res;
}