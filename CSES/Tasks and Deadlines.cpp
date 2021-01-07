#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
 
        int n;
        std::cin >> n;
        std::vector<std::pair<int, int>> v(n);
        for (int i = 0; i < n; ++i)
        {
                std::cin >> v[i].first >> v[i].second;
        }
        std::sort(v.begin(), v.end());
        long long ans = 0, t = 0;
        for (int i = 0; i < n; ++i)
        {
                t += v[i].first;
                ans += v[i].second - t;
        }
        std::cout << ans;
}