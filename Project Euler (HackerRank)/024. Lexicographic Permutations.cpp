#include <bits/stdc++.h>
using namespace std;

vector<int> GetFactoradic(int n, int size)
{
    vector<int> fact;
    int index = 1;
    while (size--)
    {
        int rem = n % index;
        fact.push_back(rem);
        n = floor(n / index);
        index++;
    }
    reverse(fact.begin(), fact.end());
    return fact;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "abcdefghijklm";
        string ans = "";
        if (n == 1)
        {
            cout << s << endl;
            continue;
        }
        --n;
        vector<int> order = GetFactoradic(n, s.length());
        for (int i = 0; i < order.size(); i++)
        {
            char c = s[order[i]];
            s.erase(s.begin() + order[i]);
            ans += c;
        }
        cout << ans << endl;
    }
    return 0;
}
