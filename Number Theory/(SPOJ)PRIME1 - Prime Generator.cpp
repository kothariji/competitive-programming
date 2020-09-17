#include<bits/stdc++.h>
using namespace std;
#define long long int ll;
ll prime[500000];
ll seg[1000005];
vector<ll> v;
void sieve()
{
    for(int i=0;i<500000;i++) prime[i]=1;
    
     for(int i=4;i<500000;i+=2) prime[i]=0;
    for(int i=3;i*i<500000;i+=2){
        if(prime[i]){
            for(int j=2*i;j<500000;j+=i){
                prime[j]=0;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<500000;i+=2)
       if(prime[i]) v.push_back(i);
}
void segment_sieve(ll a, ll b)
{
    // sieve();
    
    for(ll i=0;i<1000005;i++) seg[i]=1;
    
    for(ll i=0;v[i]*v[i]<=b;i++){
        ll curr_prime=v[i];
        ll base=(a/v[i])*v[i];
        if(base<a) base+=v[i];
            for(int j=base;j<=b;j+=v[i]){
                     seg[j-a]=0;
            }
      if(base==curr_prime) seg[base-a]=1;
        
    }
    ll cnt=0;
    for(ll i=a;i<=b;i++){
        if(i!=1)
        if(seg[i-a]) {  cnt++; printf("%lld\n",i); }
    }
    // cout<<endl;
    // cout<<cnt<<endl;
}
int main()
{
    sieve();
   
    ll t;
     scanf("%lld",&t);
    while(t--){
        ll a ,b;
        scanf("%lld",&a);
         scanf("%lld",&b);
        segment_sieve(a,b);
        printf("\n");
         
    }
}