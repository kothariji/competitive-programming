#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x; cin >> x;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        
        sort(v.begin(), v.end());

        if (x > v.back()) {
            int ans = 0;
            for(int j = n-1;j>=0;j--) {
                if(abs(v[j] - x)%2 == 1) ans++;
                else break;
            }
            cout << ans << " " << (ans == n ? 1: -1) << '\n';
        }
        else if (x < v.front()) {
            int ans = 0;
            for(int j  = 0;j<n;j++){
                if(abs(v[j] - x)%2 == 1) ans++;
                else break;
            }
            cout << ans << " " << (ans == n ? 1: -1) << '\n';
        }
        else{
            int i = -1, j = -1;
            for(int k  = 0;k<n;k++) {
                if (v[k] < x) i = k;
                if (v[k] > x and j == -1)j = k;
            }
            int ans =0;
            
            while(i >= 0 || j < n) {
                int a=0, b=0;
                if(i >= 0)a = abs(v[i] - x)%2;
                if(j < n) b =abs(v[j] - x)%2;
                if(a == 0 and b== 0)break;

                if (a == 1) {
                    i--;
                    ans++;
                }
                if (b == 1) {
                    j++;
                    ans++;
                }
            }
            cout << ans << " " << (ans == n ? 1: -1) << '\n';

        }
        
    }
    

}