#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    vector<int> v2(v1);
    sort(v2.begin(), v2.end());
    int stidx(-1), endidx(-1);
    for (int i = 0; i < n; i++)
        if (v1[i] != v2[i])
        {
            stidx = i;
            break;
        }
    for (int i = n - 1; i >= 0; i--)
        if (v1[i] != v2[i])
        {
            endidx = i;
            break;
        }
    if (stidx == -1 && endidx == -1)
        cout << "yes\n1 1";
    else
    {
        bool ans = true;
        for (int i = stidx; i <= endidx; i++)
        {
            if (v1[i] != v2[endidx - i + stidx])
            {
                // cout << stidx << " " << endidx << endl;
                // cout << i << " " << endidx - i + stidx << endl;
                // cout << "false: i:" << i << " vals: " << v1[i] << " " << v2[endidx - i + stidx] << endl;
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "yes" << endl
                 << stidx + 1 << " " << endidx + 1;
        }
        else
        {
            cout << "no";
        }
    }
}
