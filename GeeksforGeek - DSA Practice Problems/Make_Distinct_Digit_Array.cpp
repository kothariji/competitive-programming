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
    * Given an array nums of positive integers of size N. Find all distinct digits present in nums.
*/
void solve() {
    int N; cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) cin >> nums[i];

    map <int, int> m;
    for (int i = 0; i < N; i++) {
        int x = nums[i];
        while (x) {
            m[x % 10]++;
            x /= 10;
        }
    }

    vector<int> ans;
    for (auto it = m.begin(); it != m.end(); it++) {
        ans.push_back(it->first);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
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