#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fr first
#define sd second
#define mp make_pair
#define bg begin()
#define en end()

#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define ppiipii pair<pii, pii>
#define pipii pair<int, pii>
#define vpii vector<pair<int, int>>
#define fi(var, initial, final, update) for(ll var=initial;var<final;var+=update)
#define f(n) for(ll i=0;i<n;i++)
#define frev(n) for(ll i=n;i>=0;i--)
#define fe(s) for(auto i: s)
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ull pow(ull x, int y, int m){
    ull res = 1;
    x = x % m;
    while (y > 0) { 
        if (y & 1) 
            res=(res*x)%m;
        y=y>>1;
        x=(x*x)%m; 
    } 
    return res; 
} 
  
ull inv(ull n, int m) 
{ 
    return pow(n, m-2, m); 
} 
  
ull nCr(ull n, int r, int m){
    if (r == 0)
        return 1;
    ull fac[n+1];
    fac[0]=1;
    for(int i=1;i<=n;i++) 
        fac[i]=(fac[i-1]*i)%m;
    return (fac[n]* inv(fac[r],m)%m * inv(fac[n-r],m)%m)%m; 
} 

bool digits(ll n, ll a, ll b){
	while(n>0){
		if(n%10!=a && n%10!=b)
			return false;
		n/=10;
	}
	return true;
}

int main(){
	ll a, b, n;
	cin>>a>>b>>n;
	ll sum=n*b;
	ll ans=digits(sum, a, b);
    int MOD=1000000007;
	for(int i=1;i<=n;i++){
		sum=sum+a-b;
		if(digits(sum, a, b)){
			ans=(ans+nCr(n, i, MOD))%(MOD);
		}
	}
	cout<<ans<<endl;
	return 0;
}