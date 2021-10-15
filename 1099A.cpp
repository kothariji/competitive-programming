// solution for 1099A.cpp -->https://codeforces.com/contest/1099/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int w, h;
    int u1, u2;
    int d1, d2;
    cin>> w >> h;
    cin >> u1 >> d1;
    cin >> u2 >> d2;
    for(int i = h; i >= 0 ; i--) {
        w = w + i;
        if(d1 != d2) {
            if(i == d1 && d1 <= h ) {
                w = w - u1;
            } else if (i == d2 && d2 <=h) {
                w = w - u2;
            }
        }
        w = max ( 0 , w);
    } 
    if(h <= 0)
        cout << 0 ;
    else 
        cout << w;
    return 0;
}
