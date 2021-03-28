class Solution
{
public:
    void genereate(int n, int count, int cc, string s, vector<string> &v1)
    {
        if (count > n)
            return;
        if (count == n)
        {
            int l = s.length();
            for (int i = 0; i < (2 * n) - l; i++)
                s += ')';
            v1.push_back(s);
            return;
        }
        genereate(n, count + 1, cc, s + "(", v1);
        if (cc < count)
            genereate(n, count, cc + 1, s + ")", v1);
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> v1;
        string s = "(";
        genereate(n, 1, 0, s, v1);
        return v1;
    }
};