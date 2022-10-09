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
   * Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.
*/
void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int RightBlock[n], LeftBlock[n];
    RightBlock[n-1] = arr[n - 1];
    LeftBlock[0] = arr[0];
    for (int i = 1; i < n; i++) {
        LeftBlock[i] = max(LeftBlock[i - 1], arr[i]);
        RightBlock[n - i - 1] = max(RightBlock[n - i], arr[n - i - 1]);
    }

    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(LeftBlock[i], RightBlock[i]) - arr[i];
    }
    cout << water << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("/home/aman/Desktop/30 Days of Code/input.txt", "r", stdin);
    freopen("/home/aman/Desktop/30 Days of Code/output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}