/*
   * कर्मणये वाधिकारस्ते मां फलेषु कदाचन ।
   * मां कर्मफलहेतुर्भू: मांते संङगोस्त्वकर्मणि ॥
*/

#include <bits/stdc++.h>
#include <unordered_map>
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
   * Given two strings A and B. Find the characters that are not common in the two strings.
*/
string UncommonChars(string A, string B) {
    int a[26] = { 0 };
    int b[26] = { 0 };
    for (int i = 0;i < A.size();i++)
    {
        a[A[i] - 'a'] = 1;
    }
    for (int i = 0;i < B.size();i++)
    {
        b[B[i] - 'a'] = 1;
    }
    string s = "";
    for (int i = 0;i < 26;i++)
    {
        if ((a[i] == 1 && b[i] == 0) || (a[i] == 0 && b[i] == 1))
            s += char(i + 'a');
    }
    if (s.size() == 0)
        return "-1";
    return s;
}

void solve() {
    string A, B;
    cin >> A >> B;
    cout << UncommonChars(A, B) << endl;
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