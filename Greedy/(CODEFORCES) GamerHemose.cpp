//https://codeforces.com/contest/1592/problem/A

/*It's always optimal to use two weapons with the highest damage value and switch between them.

Let x be the highest damage value of a weapon, and y be the second-highest damage value of a weapon. we will decrease monster health by x in the first move, and by y in the second move and so on.*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    for (cin >> t; t; t -= 1)
    {
        int n, H;
        cin >> n >> H;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end(), greater<int>());
        int ans = H / (a[0] + a[1]) * 2;
        H %= (a[0] + a[1]);
        for (int i = 0; i < n; i += 1)
            if (H > 0)
            {
                H -= a[i];
                ans += 1;
            }
        cout << ans << "\n";
    }
    return 0;
}
