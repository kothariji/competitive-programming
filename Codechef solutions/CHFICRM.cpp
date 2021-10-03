#include <bits/stdc++.h>
using namespace std;

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll  long long int

bool solve(){
    ll n;
    cin>>n;

    ll five=0;
    ll ten=0;
    ll x;

    bool ans = true;

    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(x==5){
            five++;
        } else if(x==10) {
            if(five<=0)
                ans = false;
            five--;
            ten++;
        } else if(x==15) {
            if(ten>0)
                ten--;
            else if(five>=2)
                five-=2;
            else {
                ans = false;
            }
        }
    }


    return ans;
}

int main() {
    sync;
    int testCases;
    cin >> testCases;
    while (testCases--) {
        bool ans = solve();
        if(ans)
            cout<<"YES\n";
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}
