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
    * Given an array arr[ ] containing equal number of positive and negative elements, arrange the array such that every positive element is followed by a negative element.
    * Note- The relative order of positive and negative numbers should be maintained.
*/
void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> arranged(n);
    for (int i = 0, positive = 0, negative = 1; i < n; i++) {
        if(arr[i] > 0) {
            arranged[positive] = arr[i];
            positive += 2;
        } else {
            arranged[negative] = arr[i];
            negative += 2;
        }
    }
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