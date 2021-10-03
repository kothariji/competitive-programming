#include <bits/stdc++.h>
using namespace std;

const int sz = 2e5 + 1;

void solve() {
    long long n;
    cin >> n;
    long long a[sz], i, prev, sum=0, h=1;
    for(i = 0; i < n; i ++) {
        cin >> a[i];
    }
    prev = a[0];
    for(i = 1; i < n; i ++) {
        if(a[i] < a[i-1]) {            
            if(h == 1){
                prev = a[i-1];
                h = 0;	
            }            
            if(a[i] < prev){
                sum += prev-a[i];
            }            
        }
        prev = a[i];
    }    
    cout << sum;
}

int main() {
    int t;
    cin >> t;
    while(t --) {
        solve();
        cout << endl;
    }
    return 0;
}

 