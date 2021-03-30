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
    int n, time;
    cin >> n >> time;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int idx(0), maxsize(0), currtime(0), countbooks(0);
    int start = -1;
    while (idx < n)
    {
        if ((currtime + v1[idx]) <= time)
        {
            if (start == -1)
                start = idx;
            currtime += v1[idx];
            countbooks++;
            idx++;
            maxsize = max(maxsize, countbooks);
        }
        else
        {
            if (start == -1)
            {
                idx++;
                continue;
            }
            currtime -= v1[start];
            countbooks--;
            start++;
            if (start == idx)
                start = -1;
        }
    }
    cout << maxsize;
    return 0;
}