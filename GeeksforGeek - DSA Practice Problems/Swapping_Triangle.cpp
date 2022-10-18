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
   * Given an integer N and a matrix A of dimensions NxN.Swap the values of the triangle above the primary diagonal with the values of the triangle below the primary diagonal.
*/
vector<vector<int>> swapTriangle(int N, vector<vector<int>> Arr) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                swap(Arr[i][j], Arr[j][i]);
            }
        }
    }
    return Arr;
}

void solve() {
    int N;
    cin >> N;
    vector<vector<int>> Arr(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> Arr[i][j];
        }
    }
    Arr = swapTriangle(N, Arr);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
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

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}