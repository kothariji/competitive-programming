#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define endl '\n'
#define deb(x) cout << #x << '=' << x << '\n'
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << '\n'
#define deb3(x, y, z) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << '\n'
#define deb4(x, y, z, w) cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z << ',' << #w << '=' << w << '\n'
using namespace std;

bool isSorted(vector<int> v1)
{
    for (int i = 1; i < v1.size(); i++)
        if (v1[i] < v1[i - 1])
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    if (isSorted(v1))
    {
        cout << 0;
        return 0;
    }
    int mine = *max_element(v1.begin(), v1.end());
    int minel(0);
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == mine)
        {
            if (i == (v1.size() - 1))
            {
                minel = 0;
            }
            else
            {
                minel = i + 1;
                if (v1[i] != v1[i + 1])
                {
                    break;
                }
            }
        }
    }
    rotate(v1.begin(), v1.begin() + minel, v1.end());
    if (isSorted(v1))
    {
        cout << n - minel;
    }
    else
        cout << "-1";
    return 0;
}