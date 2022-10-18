#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define t     \
    ll t;     \
    cin >> t; \
    while (t--)
using namespace std;

int main()
{
    t
    {
        ll x1, y1, x2, y2;
        int count = 0;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        vector<pair<ll, ll>> v1;
        vector<pair<ll, ll>> v2;
        if ((x1 + 1) >= 1 && (x1 + 1) <= 8)
        {
            if ((y1 + 2) >= 1 && (y1 + 2) <= 8)
            {
                v1.pb(mp((x1 + 1), (y1 + 2)));
            }
            if ((y1 - 2) >= 1 && (y1 - 2) <= 8)
            {
                v1.pb(mp((x1 + 1), (y1 - 2)));
            }
        }
        if ((x1 + 2) >= 1 && (x1 + 2) <= 8)
        {
            if ((y1 + 1) >= 1 && (y1 + 1) <= 8)
            {
                v1.pb(mp((x1 + 2), (y1 + 1)));
            }
            if ((y1 - 1) >= 1 && (y1 - 1) <= 8)
            {
                v1.pb(mp((x1 + 2), (y1 - 1)));
            }
        }
        if ((x1 - 1) >= 1 && (x1 - 1) <= 8)
        {
            if ((y1 + 2) >= 1 && (y1 + 2) <= 8)
            {
                v1.pb(mp((x1 - 1), (y1 + 2)));
            }
            if ((y1 - 2) >= 1 && (y1 - 2) <= 8)
            {
                v1.pb(mp((x1 - 1), (y1 - 2)));
            }
        }
        if ((x1 - 2) >= 1 && (x1 - 2) <= 8)
        {
            if ((y1 + 1) >= 1 && (y1 + 1) <= 8)
            {
                v1.pb(mp((x1 - 2), (y1 + 1)));
            }
            if ((y1 - 1) >= 1 && (y1 - 1) <= 8)
            {
                v1.pb(mp((x1 - 2), (y1 - 1)));
            }
        }
        if ((x2 + 1) >= 1 && (x2 + 1) <= 8)
        {
            if ((y2 + 2) >= 1 && (y2 + 2) <= 8)
            {
                v2.pb(mp((x2 + 1), (y2 + 2)));
            }
            if ((y2 - 2) >= 1 && (y2 - 2) <= 8)
            {
                v2.pb(mp((x2 + 1), (y2 - 2)));
            }
        }
        if ((x2 + 2) >= 1 && (x2 + 2) <= 8)
            {
                if ((y2 + 1) >= 1 && (y2 + 1) <= 8)
                {
                    v2.pb(mp((x2 + 2), (y2 + 1)));
                }
                if ((y2 - 1) >= 1 && (y2 - 1) <= 8)
                {
                    v2.pb(mp((x2 + 2), (y2 - 1)));
                }
            }
        if ((x2 - 1) >= 1 && (x2 - 1) <= 8)
            {
                if ((y2 + 2) >= 1 && (y2 + 2) <= 8)
                {
                    v2.pb(mp((x2 - 1), (y2 + 2)));
                }
                if ((y2 - 2) >= 1 && (y2 - 2) <= 8)
                {
                    v2.pb(mp((x2 - 1), (y2 - 2)));
                }
            }
        if ((x2 - 2) >= 1 && (x2 - 2) <= 8)
            {
                if ((y2 + 1) >= 1 && (y2 + 1) <= 8)
                {
                    v2.pb(mp((x2 - 2), (y2 + 1)));
                }
                if ((y2 - 1) >= 1 && (y2 - 1) <= 8)
                {
                    v2.pb(mp((x2 - 2), (y2 - 1)));
                }
            }

            for (int i = 0; i < v1.size(); i++)
            {
                ll x, y;
                
                    x = v1[i].first;
                    y = v1[i].second;
                
                for (int i = 0; i < v2.size(); i++)
                {
                    
                    
                        if (x == v2[i].first && y == v2[i].second)
                        {
                            count++;
                        }
                    
                
            }}
            // for(int i=0;i<v1.size();i++){
            //     cout<<v1[i].first<<" "<<v1[i].second <<" ";
            // }
            if (count > 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
