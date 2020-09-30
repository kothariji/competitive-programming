#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define _CRT_SECURE_NO_WARNINGS


/**
    Number of spanning trees in complete bipartite graph is: X^{Y - 1} * Y^{X - 1}
    So, we have to calculate answer for each X = i, Y = n - i where 1 <= i < n then multiply answer by n! because of permutations of items
**/

#include <bits/stdc++.h>

using namespace std;

const int maxx = 100005;

int powmod (int a, int b, int mod) {
    int res = 1;
    a %= mod;
    for (; b; b >>= 1) {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
    }
    return res;
}

const int MOD = 1e9 + 7;

int fac[maxx << 1];
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    fac[0] = 1;
    for (int i = 1; i < maxx << 1; i++) {
        fac[i] = 1LL * fac[i - 1] * i % MOD;
    }
    int n;
    while (cin >> n) {
        int res = 0;
        for (int i = 1; i <= n - 1; i++) {
            res = (res + (1LL * powmod(i, n - i - 1, MOD) * powmod(n - i, i - 1, MOD) % MOD)) % MOD;
        }
        res = (1LL * res * fac[n]) % MOD;
        cout << res << endl;
    }
    return 0;
}
