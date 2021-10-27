#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll INF = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> in_degree(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        in_degree[v]++;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (in_degree[i] == 0)
            cnt++;

    cout << cnt - 1 << endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
