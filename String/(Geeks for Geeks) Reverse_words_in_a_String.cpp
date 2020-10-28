
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << reverseWords(s) << endl;
    }
} // } Driver Code Ends

string reverseWords(string s)
{
    // code here
    string res = "";
    reverse(s.begin(), s.end());
    int k = 0;
    for (int ind = 0; ind < s.length(); ind++)
    {
        if (s[ind] == '.')
        {
            for (int ctr = ind - 1; ctr >= k; ctr--)
                res += s[ctr];
            res += '.';
            k = ind + 1;
        }
    }
    for (int ctr = s.length() - 1; ctr >= k; ctr--)
        res += s[ctr];
    return res;
}