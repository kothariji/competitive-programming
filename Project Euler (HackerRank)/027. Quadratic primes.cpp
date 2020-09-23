#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool prime[30009];
int main(){
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(ll i=2;i*i<=30009-5;i++){
        if(!prime[i]) continue;
        for(ll j=i*i;j<=30009-5;j+=i){
            prime[j]=0;
        }
    }
    ll n; cin>>n;
    ll maxi=-1,ca,cb,mans=-1;
    for(ll a=-n;a<=n;a++){
        for(ll b=((a*a)/4LL);b<=n;b++){
            ll ct=0;
            for(ll i=0;;i++){
                ll ans=i*i+a*i+b;
                if(ans<0) continue;
                if(ans>mans) mans=ans;
                if(prime[ans]) ++ct;
                else break;
            }
            if(ct>maxi){
                maxi=ct;
                ca=a;
                cb=b;
 
            }
        }
    }
    cout<<ca<<" "<<cb<<endl;
}
