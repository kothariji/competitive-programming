#include<bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 1;

void solve() {
    int n, x;
    cin >> n >> x;
    int a[sz], count = 0, sum = 0;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        if(a[i] == x) {
            count++;
        }
        sum += a[i] - x;
    }
    if(count == n) {
        cout << 0;
    } else if(count > 0 || sum == 0) {
        cout << 1;
    } else {
        cout << 2;
    }
} 
 
int32_t main() {
    int t = 1;
    cin >> t;
    while(t --){
        solve();
        cout << endl;
    }
    return 0;
}
