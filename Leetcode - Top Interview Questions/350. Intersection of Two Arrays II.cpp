class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp1, mp2;
        unordered_set<int> s1;
        for (int c : nums1)
            mp1[c]++, s1.insert(c);
        for (int c : nums2)
            mp2[c]++, s1.insert(c);
        vector<int> ans;
        for (int c : s1)
        {
            int count = min(mp1[c], mp2[c]);
            while (count--)
                ans.push_back(c);
        }
        return ans;
    }
};