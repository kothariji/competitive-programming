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
    * Given three integers N, M, and K and a matrix Mat of dimensions NxM. Left rotate the matrix K times.
*/
void solve() {
    int arr[] = { 1,2,3,4 };
    int N, M, K; cin >> N >> M >> K;
    vector<vector<int>> Mat(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Mat[i][j];
        }
    }

    K = K % M;
    for (int i = 0; i < N; i++) {
        reverse(Mat[i].begin(), Mat[i].begin() + K);
        reverse(Mat[i].begin() + K, Mat[i].begin() + M);
        reverse(Mat[i].begin(), Mat[i].end());
    }

/*
    for (int i = 0; i < N; i++) {
        rotate(Mat[i].begin(), Mat[i].begin() + K, Mat[i].end());
    }
*/
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

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