#include<bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 1;

void solve() {
    int n, t;
    cin >> n >> t;
    int a[sz];
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    unordered_map <int, int> p;
    for(int i = 0; i < n; i ++) {
        cout << p[a[i]] << " ";
        if(a[i] > t) {
            p[a[i]] = 0;
        } else {
            p[t - a[i]] = !p[a[i]];
        }
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