#include <iostream> 
 
 
int main()
{
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
 
        const size_t kMaxN = 2e5;
        size_t n, x, a[kMaxN], ans = 0;
        std::cin >> n >> x;
        for (size_t i = 0, j = 0, sum = 0; i < n; ++i)
        {
                std::cin >> a[i];
                sum += a[i];
                if (sum == x)
                {
                        ans++;
                }
                if (sum > x)
                {
                        while (sum > x)
                        {
                                sum -= a[j++];
                        }
                        if (sum == x)
                        {
                                ans++;
                        }
                }
        }
        std::cout << ans;
}