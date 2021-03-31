class Solution
{
public:
    int titleToNumber(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            ans += (s[i] - 'A' + 1) * pow(26, s.length() - i - 1);
        }
        return ans;
    }
};