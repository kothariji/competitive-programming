#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
ll n, res, sum = 0;
vector<ll> a;
 
void solve(int i, ll s) {
    if(i == n) {
        ll x = s;
        ll y = sum - s;
        if (y > x) swap(x, y);
        res = min(res, x - y);
        return;
    }
    solve(i + 1, s);
    solve(i + 1, s + a[i]);
}
 
int main() {
 
    cin >> n;
    a = vector<ll>(n);
 
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
 
    res = sum;
    solve(0, 0);
    
    cout << res << endl;
}