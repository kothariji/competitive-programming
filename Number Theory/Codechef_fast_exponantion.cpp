#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ll long long
ll mod = 1000000007l;
using namespace std;

ll power(ll a, ll n){
   ll result = 1;
   while(n){
        if(n%2){
            (result *= a) %= mod; 
            n--;
        }
        else{
            (a *= a) %= mod;
            n /= 2;
        }
   }
   return result%mod;
}

int main(){
    int t;cin>>t;
    while(t--){
        ll a,n;
        cin>>a>>n;
        cout<<power(a,n)%mod<<endl;  
    }
     return 0;
}

