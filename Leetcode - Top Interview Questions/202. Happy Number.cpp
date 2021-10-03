class Solution
{
public:
    bool isHappy(int n, int times = 0)
    {
        if (times == 20)
            return false;
        if (n == 1)
            return true;
        int ans(0);
        string s = to_string(n);
        for (char c : s)
        {
            ans += ((c - '0') * (c - '0'));
        }
        return isHappy(ans, times + 1);
    }
};