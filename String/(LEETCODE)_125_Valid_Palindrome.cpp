
class Solution
{
public:
    bool isPalindrome(string s)
    {

        int i, j;
        int n = s.size();

        string minimizedSt = "";
        //remove extra character
        for (i = 0; i < n; i++)
        {

            if (s[i] == ' ')
                continue;

            if (s[i] >= 48 && s[i] <= 57)
            {
                minimizedSt.push_back(s[i]);
            }

            else if ((tolower(s[i]) >= 97 && tolower(s[i]) <= 122))
            {
                minimizedSt.push_back(tolower(s[i]));
            }
        }

        string reverseSt = "";
        string mainCopy = minimizedSt;

        //reverse string part
        for (j = mainCopy.size() - 1; j >= 0; j--)
        {
            reverseSt.push_back(mainCopy[j]);
        }
        if (minimizedSt == reverseSt)
        {
            return true;
        }

        return false;
    }
};
