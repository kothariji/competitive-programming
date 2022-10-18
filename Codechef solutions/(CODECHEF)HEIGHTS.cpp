#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

#define t     \
    ll t;     \
    cin >> t; \
    while (t--)
using namespace std;

int main()
{
    t
    {
        ll n, c1, c2, d = 0;
        ll mx1 = 0, mx2 = 0, count = 0;
        set<ll> s;
        std::vector<ll> v1, v2;
        unordered_map<ll, ll> mp;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            mx1 = max(mx1, a[i]);
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                count++;
                v1.push_back(it->first);
            }
            else
            {
                v2.push_back(it->second);
            }
        }
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());

        if (count != 1)
        {
            cout << (count + 1) / 2 << endl;
        }
        else
        {
            if (mx1 == v1[0])
            {
                int mx2 = *max_element(v2.begin(), v2.end());
                if (mx2 <= 2)
                {
                    cout << mx2 << endl;
                }
                else
                    cout << 1 << endl;
            }
            else
                cout << 1 << endl;
        }
    }
}
