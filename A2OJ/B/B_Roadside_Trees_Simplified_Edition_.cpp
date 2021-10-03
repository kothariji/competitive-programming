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
    int n;
    cin >> n;
    lli ans = 0;
    int curr = 0;
    int change = 0;
    while (n--)
    {
        int ht;
        cin >> ht;
        if (ht >= curr)
        {
            ans += (change + (ht - curr) + 1);
        }
        else
        {
            ans += ((curr - ht) + change + 1);
        }
        if (change == 0)
            change++;
        curr = ht;
    }
    cout << ans;

    return 0;
}