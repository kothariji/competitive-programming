#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    unordered_map<string, string> mp1;
    for (int i = 0; i < w; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s2.length() < s1.length())
            mp1[s1] = s2;
        else
            mp1[s1] = s1;
    }
    while (n--)
    {
        string s1;
        cin >> s1;
        cout << mp1[s1] << " ";
    }
}