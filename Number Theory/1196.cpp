#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long m, n, r;
    cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>m>>n>>r;
        long long s = m+n+r;
        cout<<s/2<<"\n";
    }
    return 0;
 }
