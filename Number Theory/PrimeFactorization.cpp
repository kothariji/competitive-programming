#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;

// Complexity - O(sqrt(N))
void primeFact(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            int cnt = 0;
            while(n % i == 0) {
                cnt++;
                n /= i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
    // If number is prime then it would need itself raise to 1 as no number would divide it
    if(n > 1)
        cout << n << "^" << 1 << endl;
}

int32_t main() {
    int n;
    cin >> n;
    primeFact(n);
    return 0;
}
