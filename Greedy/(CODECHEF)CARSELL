/* Dipesh Kumar */

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;

bool compare(int a, int b){
    return a>b;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll ans =0;
    ll p[n];
    for(int i =0; i<n; i++){
        cin>>p[i];
    }
    sort(p, p+n, compare);

    for(int i=0; i<n; i++){
        if(p[i]-i>0)
        {
            p[i] -=i;
            ans += p[i];
        }
    }
    ans = ans%mod;
    cout<<ans<<endl;
    }
    	return 0;
    }
