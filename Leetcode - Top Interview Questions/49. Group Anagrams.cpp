class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp1;
        for (auto c : strs)
        {
            string temp = c;
            sort(temp.begin(), temp.end());
            mp1[temp].push_back(c);
        }
        vector<vector<string>> res;
        for (auto c : mp1)
            res.push_back(c.second);
        return res;
    }
};