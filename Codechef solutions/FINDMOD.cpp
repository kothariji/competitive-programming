#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while(t--) {
        long long x= 1e18+1;
        
        cout << "? " << x << endl;        
        
        long long y; cin >> y;
       
        cout << "? " << x - y - 1 << endl;
        
        cin >> y;
        
        cout << "! " << y + 1 << endl;        

    }
    

}