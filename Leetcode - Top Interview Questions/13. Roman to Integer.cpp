class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp1;
        mp1['V'] = 5;
        mp1['I'] = 1;
        mp1['X'] = 10;
        mp1['L'] = 50;
        mp1['C'] = 100;
        mp1['D'] = 500;
        mp1['M'] = 1000;
        int n = s.length();
        int ans(0);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                if ((i + 1) < n)
                {
                    if (s[i + 1] == 'V')
                    {
                        ans += 4;
                        i++;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        ans += 9;
                        i++;
                    }
                    else
                    {
                        ans += mp1[s[i]];
                    }
                }
                else
                    ans += mp1[s[i]];
            }
            else if (s[i] == 'X')
            {
                if ((i + 1) < n)
                {
                    if (s[i + 1] == 'L')
                    {
                        ans += 40;
                        i++;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        ans += 90;
                        i++;
                    }
                    else
                    {
                        ans += mp1[s[i]];
                    }
                }
                else
                    ans += mp1[s[i]];
            }
            else if (s[i] == 'C')
            {
                if ((i + 1) < n)
                {
                    if (s[i + 1] == 'D')
                    {
                        ans += 400;
                        i++;
                    }
                    else if (s[i + 1] == 'M')
                    {
                        ans += 900;
                        i++;
                    }
                    else
                    {
                        ans += mp1[s[i]];
                    }
                }
                else
                    ans += mp1[s[i]];
            }
            else
                ans += mp1[s[i]];
        }
        return ans;
    }
};