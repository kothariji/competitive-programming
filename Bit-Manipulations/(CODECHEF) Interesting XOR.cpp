// https://www.codechef.com/MARCH21C/problems/IRSTXOR?tab=statement

#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
typedef long long ll;
#define int long long
#define endl "\n"
#define forp(i, x, t) for (int i = x; i < t; i++)
#define forn(i, t) for (int i = t; i >= 0; i--)
#define deb(x) cout << #x << " = " << x << endl
const int mod = 1e9 + 7;

using namespace std;

string binary(int n)
{
    string s = bitset<64>(n).to_string();

    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
    {
        return s.substr(loc1);
    }

    return "0";
}

void solve()
{
    int n;
    cin >> n;

    string num = binary(n);
    // cout << num << " ";
    string ans = "";
    forp(i, 0, num.length())
    {
        if (i == 0)
        {
            ans += '1';
        }
        else if (num[i] == '0')
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    // cout << ans << " ";
    int final = stoi(ans, 0, 2);

    cout << (final * (n ^ final));
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}