#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        map<pair<int,int> ,bool> m;
        vector<int> dia(2*n, 1);
    
        for(int i = 2;i<2*n;i++) {
            if(i <= n)dia[i] = dia[i-1] + 1;
            else dia[i] = dia[i-1] - 1;
        }

        for(int i = 0;i<n;i++) {
            int a, b;
            cin >> a >> b;
            
            int x = a-1, y = n - b;
            a -= min(x, y);
            b += min(x, y);
            
            if(a == 1 and b == n)dia[n]--;
            else if (a == 1)dia[b]--;
            else dia[n + a - 1]--;
            
        }

        cout << (count(dia.begin(), dia.end(), 0) >= 1 ? "NO" : "YES") << '\n';
        
    }
    

}