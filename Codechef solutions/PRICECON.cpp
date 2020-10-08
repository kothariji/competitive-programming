#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        ll n,k;
        cin>>n>>k;
        ll p,s=0;
        for (int i = 0; i < n; ++i) {
            cin>>p;
            if(p>k){
                s+=p-k;
            }
        }
        cout<<s<<'\n';
    }

    return 0;
}
