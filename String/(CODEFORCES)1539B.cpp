#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> S(n + 1);
    S[0] = 0;
    for (int i = 0; i < n; i++)
    {
        S[i + 1] = S[i] + (s[i] - 'a' + 1);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        cout << S[r] - S[l] << '\n';
    }
}