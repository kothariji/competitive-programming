#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl '\n'
#define deb(x) cout << #x << '=' << x << '\n'
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << '\n'
#define deb3(x, y, z) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << '\n'
#define deb4(x, y, z, w) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << ',' << #w << '=' << w << '\n'
using namespace std;

bool isSub(string s, string t)
{
    int j = 0;
    for (auto c : s)
    {
        if (c == t[j])
            j++;
    }
    return j == t.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> mp1;
    for (int i = 0; i < s.length(); i++)
        mp1[s[i]]++;
    for (int i = 0; i < t.length(); i++)
        mp1[t[i]]--;
    for (auto c : mp1)
    {
        if (c.second < 0)
        {
            cout << "need tree";
            return 0;
        }
    }
    if (s.length() == t.length())
    {
        cout << "array";
        return 0;
    }
    if (isSub(s, t))
    {
        cout << "automaton";
        return 0;
    }
    cout << "both";
    return 0;
}