// Codeforces 808D - Array Division
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> A(n + 1, 0);
    ll S = 0;
    rep(i, n) cin >> A[i], S += A[i];
    if (S & 1) {
        cout << "NO\n";
        return 0;
    }

    unordered_map<ll, int> first, second;
    first[A[0]] = 1;
    repA(i, 1, n - 1) second[A[i]]++;

    ll sdash = 0;

    for (int i = 0; i < n; i++) {
        sdash += A[i];  //first i numbers
        if (sdash == S / 2) {
            cout << "YES\n";
            return 0;
        }
        if (sdash < S / 2) {
            ll x = S / 2 - sdash;
            if (second[x] > 0) {
                cout << "YES\n";
                return 0;
            }
        }
        else {
            ll y = sdash - S / 2;
            if (first[y] > 0) {
                cout << "YES\n";
                return 0;
            }
        }
        //i++
        first[A[i + 1]]++;
        second[A[i + 1]]--;
    }
    cout << "NO\n";
    return 0;
}