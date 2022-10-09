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
    * Given a Integer array A[] of n elements. Your task is to complete the function. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.
*/
bool isPalindrome(int n) {
    int temp = n;
    int rev = 0;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}

void solve() {
    int n; cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++) cin >> i;

    for (auto i : Arr) (isPalindrome(i) ? cout << "1" : cout << "0");
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