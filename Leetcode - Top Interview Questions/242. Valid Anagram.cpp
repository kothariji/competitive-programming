class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_multiset<char> ms1, mt1;
        for (char h : s)
            ms1.insert(h);
        for (char h : t)
            mt1.insert(h);
        return mt1 == ms1;
    }
};