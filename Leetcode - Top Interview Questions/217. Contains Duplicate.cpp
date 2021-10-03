class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s1;
        for (int c : nums)
            s1.insert(c);
        return !(s1.size() == nums.size());
    }
};