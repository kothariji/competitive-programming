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
    int n, d;
    cin >> n >> d;
    if (d == 0)
    {
        cout << "YES";
        return 0;
    }
    vector<int> v1(d);
    for (int i = 0; i < d; i++)
        cin >> v1[i];
    sort(v1.begin(), v1.end());
    if (v1[0] == 1 || v1[d - 1] == n)
        cout << "NO";
    else
    {
        bool ans = true;
        for (int i = 1; i < d - 1; i++)
        {
            if ((v1[i + 1] - v1[i] == 1) && (v1[i] - v1[i - 1] == 1))
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}