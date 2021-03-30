class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<unordered_multiset<char>, vector<string>> mp1;
        for (c : strs)
        {
            unordered_multiset<char> ms1;
            for (char h : c)
                ms1.insert(h);
            mp1[ms1].push_back(c);
        }
        vector<vector<string>> res;
        for (auto c : mp1)
            res.push_back(c.second);
        return res;
    }
};