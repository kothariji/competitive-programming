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
   * Given a list of integers, rearrange the list such that it consists of alternating minimum-maximum elements using only list operations. The first element of the list should be the minimum of all elements and the second element should be a maximum of all elements present in the list. Similarly, the third element will be the next minimum element and the fourth element is the next maximum element, and so on. Use of extra space is not permitted. Store the answer in the answer[] array. You don't need to print that.
*/
void Rearrange(int arr[], int n, int answer[]) {
    sort(arr, arr + n);
    int k = 0;
    for (int i = 0; i < n; i++) {
        answer[k++] = arr[i];
        answer[k++] = arr[n - 1 - i];
    }
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int answer[n];
    Rearrange(arr, n, answer);
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
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