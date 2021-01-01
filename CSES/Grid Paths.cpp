#include <bits/stdc++.h>
 
using namespace std;
 
int l=1, c=0, a=0;
bool v[49];
string p;
 
bool vl () {
    return ((!v[c-1]) && c%7>0);
}
bool vr () {
    return ((!v[c+1]) && c%7<6);
}
bool vu () {
    return ((!v[c-7]) && c>6);
}
bool vd () {
    return ((!v[c+7]) && c<42);
}
void o (int d);
int r () {
    int s = l-1;
    if (l==49 || c==42) {
        if (c==42 && l==49) {
            a++;
        }
        return 0;
    }
    if (vl()&&vr()&&(!vd())&&(!vu())) return 0;
    if (vd()&&vu()&&(!vl())&&(!vr())) return 0;
    if (vd() && (p[s]=='?' || p[s]=='D')) o(7);
    if (vl() && (p[s]=='?' || p[s]=='L')) o(-1);
    if (vr() && (p[s]=='?' || p[s]=='R')) o(1);
    if (vu() && (p[s]=='?' || p[s]=='U')) o(-7);
    return 0;
}
void o(int d) {
    c += d;
    v[c]=!v[c];
    l++;
    r();
    l--;
    v[c]=!v[c];
    c -= d;
}
int main() {
    cin >> p;
    v[0]=!v[0];
    r();
    cout << a;
}