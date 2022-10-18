#include<bits/stdc++.h>

using namespace std;

int die[2001007];

int main() {
    
    int n, m, q, ans;
    cin >> n >> m;
    
    ans = n;
    
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        
        if(a < b) swap(a, b);
        die[b]++;
        if(die[b] == 1) ans--;
    }
    
    cin >> q;
    for(int i = 1; i <= q; i++) {
        int a, b, c;
        cin >> a;
        switch(a) {
            case 3 : {
                cout << ans << endl;
                break;
            }
            case 1 : {
                cin >> b >> c;
                if(c > b) {
                    swap(b, c);
                    
                }
                die[c]++;
                    if(die[c] == 1) ans--;
                break;
            }
            case 2 : {
                cin >> b >> c;
                if(c > b) {
                    swap(b, c);
                    
                }
                die[c]--;
                    if(die[c] == 0) ans++;
                break;
            }
        }
    }
    return 0;
}
