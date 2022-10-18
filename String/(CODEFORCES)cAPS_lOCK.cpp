#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define loop(a, b, c) for (int i = a; i < b; i += c)
#define tc       \
    long long t; \
    cin >> t;    \
    while (t--)
#define fast std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << x << nline
const int N = 1e6 + 1;
#define mod 1000000007
 
void solve()
{
    string s;
    cin >> s;
    string t = s;
    int a = 0;
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            a++;
        }
    }
    if (a == s.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] += 32;
        }
    }
    else if (a == s.length() - 1)
    {
        if (s[0] >= 'a' and s[0] <= 'z')
        {
            s[0] -= 32;
            for (int i = 1; i < s.length(); i++)
            {
                s[i] += 32;
            }
        }
    }
 
    cout<<s<<"\n";
}
 
signed main()
{
    fast;
    // tc
    {
        solve();
    }
}
 
// cAPSlOCK --> no change