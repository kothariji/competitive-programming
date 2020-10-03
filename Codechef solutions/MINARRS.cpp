// Author : Rajnish Singh
// Codechef : April Lunchtime LTIME71B 

#include <bits/stdc++.h>

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pb push_back

#define ll long long int

#define lld long double

#define endl "\n"

using namespace std;

int main() {
    flash ll t, n, num, ans;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        ll arr[n];
        num = 0;
        ans = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (ll i = 0; i < 30; i++) {
            ll coun = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] & (1 << i)) {
                    coun++;
                }
            }
            if (coun > (n / 2)) {
                num += 1 << i;
            }
        }
        for (int i = 0; i < n; i++) {
            ans += num ^ arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
