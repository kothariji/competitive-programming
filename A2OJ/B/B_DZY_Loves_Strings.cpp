#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    lli k;
    cin >> k;
    vector<lli> v1(26);
    for (lli i = 0; i < 26; i++)
        cin >> v1[i];
    lli finaladd = *max_element(v1.begin(), v1.end());
    lli ans(0);
    for (lli i = 0; i < s.length(); i++)
    {
        ans += (v1[s[i] - 'a'] * (i + 1));
    }
    for (lli i = 1; i <= k; i++)
    {
        ans += (finaladd * (s.length() + i));
    }
    cout << ans;
    return 0;
}