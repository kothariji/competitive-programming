#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int diff = y - x;
    if(diff < n) {
        int count = 0;
        for(int i = y; i >= 1; i --) {
            cout << i << " ";
            count ++;
            if(count >= n)break;
        }
        n -= count;
        for(int i = 0; i < n; i ++) {
            cout << ++y << " ";
        }
    } else {
        int off = diff;
        for(int i = 2; i < diff + 1; i ++){
            if(diff % i == 0 && (diff / i) < n){
                off = i;
                break;
            }
        }
        int count = 0;
        for(int i=y; i >=1; i -= off){
            cout << i << " ";
            count ++;
            if(count >= n)break;
        }
        n -= count;
        for(int i = 0; i < n; i ++){
            y += off;
            cout << y << " ";
        }
    }    
} 
 
int32_t main() {
    int t = 1;
    cin >> t;
    while(t --){
        solve();
        cout<<endl;
    }
    return 0;
}
