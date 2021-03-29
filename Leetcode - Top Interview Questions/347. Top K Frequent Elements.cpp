class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp1;
        for (auto c : nums)
            mp1[c]++;
        priority_queue<pair<int, int>> pq1;
        for (auto c : mp1)
        {
            pq1.push({c.second, c.first});
        }
        vector<int> ans;
        while (k--)
        {
            ans.push_back(pq1.top().second);
            pq1.pop();
        }
        return ans;
    }
};