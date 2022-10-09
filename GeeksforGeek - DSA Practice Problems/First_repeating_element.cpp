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
   * Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.
*/
int firstRepeated(int arr[], int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] > 1)
            return arr[i];
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << firstRepeated(arr, n) << endl;
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

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}