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
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> v1(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> v1[i];
    int curr = s;
    int check = n + 1;
    bool find = false;
    int ans = -1;
    while (check--)
    {
        ans++;
        if (t == curr)
        {
            find = true;
            break;
        }
        curr = v1[curr];
    }
    if (find)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}