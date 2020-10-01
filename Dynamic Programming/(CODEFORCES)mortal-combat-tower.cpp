#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5 + 1;
int dp[sz][2];

int find(int a[], int n, int i, int f){
    if(i > n - 1){
        return 0;
    }

    if(dp[i][f] != -1){
        return dp[i][f];
    }
    
    if(f == 1){
        dp[i][f] = a[i] + find(a, n, i + 1, 0);
        if(i + 1 < n){
            dp[i][f] = min(dp[i][f], a[i] + a[i+1] + find(a, n, i + 2, 0));
        }
        return dp[i][f];
    }

    return dp[i][f] = min(find(a, n, i + 1, 1), find(a, n, i + 2, 1));

}

void solve() {
    int n;
    cin >> n;
    int a[sz];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i ++){
        dp[i][0] = dp[i][1] = -1;
    }
    cout << find(a, n, 0, 1);
} 
 
int32_t main() {
    int t = 1;
    cin >> t;
    while(t --){
        solve();
        cout << endl;
    }
    return 0;
}
