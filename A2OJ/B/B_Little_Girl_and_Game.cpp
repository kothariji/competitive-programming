#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl '\n'
#define deb(x) cout << #x << '=' << x << '\n'
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << '\n'
#define deb3(x, y, z) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << '\n'
#define deb4(x, y, z, w) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << ',' << #w << '=' << w << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    unordered_map<char, int> mp1;
    for (auto c : s)
        mp1[c]++;
    int countodd = 0;
    for (auto c : mp1)
        if (c.second % 2)
            countodd++;
    if ((countodd % 2) || (countodd == 0))
        cout << "First";
    else
        cout << "Second";
    return 0;
}