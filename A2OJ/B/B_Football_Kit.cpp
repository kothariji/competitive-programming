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
    vector<pair<int, int>> v1(n);
    unordered_map<int, int> home, away;
    for (int i = 0; i < n; i++)
    {
        int d1, d2;
        cin >> d1 >> d2;
        v1[i] = make_pair(d1, d2);
        home[d1]++;
        away[d2]++;
    }
    for (int i = 0; i < n; i++)
    {
        int homeans(n - 1), awayans(0);
        awayans = n - 1 - home[v1[i].second];
        homeans += home[v1[i].second];
        cout << homeans << " " << awayans << endl;
    }

    return 0;
}