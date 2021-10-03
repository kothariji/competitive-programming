class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> mp1;
        for (auto c : s)
            mp1[c]++;
        for (int i = 0; i < s.length(); i++)
            if (mp1[s[i]] == 1)
                return i;
        return -1;
    }
};