/*
   * कर्मणये वाधिकारस्ते मां फलेषु कदाचन ।
   * मां कर्मफलहेतुर्भू: मांते संङगोस्त्वकर्मणि ॥
*/

#include <bits/stdc++.h>
using namespace std;

#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

/*
   * Given two force vectors, find out whether they are parallel, perpendicular or neither. Let the first vector be A = a1 i +a2 j + a3 k and the second vector be B = b1 i + b2 j + b3 k.
*/
int find(vector<int>A, vector<int>B) {
    int per = A[0] * B[0]
        + A[1] * B[1]
        + A[2] * B[2];

    int par = (A[1] * B[2] - A[2] * B[1])
        - (A[0] * B[2] - B[0] * A[2])
        + (A[0] * B[1] - A[1] * B[0]);

    if (per == 0) {
        return 2;
    }
    else if (par == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int>A(3);
    vector<int>B(3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[j];
        }
        for (int j = 0; j < 3; j++) {
            cin >> B[j];
        }
        int ans = find(A, B);
        if (ans == 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("/Users/amanxupadhyay/Documents/30 Days of Code/input.txt", "r", stdin);
    freopen("/Users/amanxupadhyay/Documents/30 Days of Code/output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();
    bug(t);

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}