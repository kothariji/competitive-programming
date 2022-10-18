#include<bits/stdc++.h>
using namespace std;
#define bug cout<<" *H* ";
#define nxtl cout<<"\n";
//fors
#define loop(i,b) for(ll i=0;i<b;i++)
#define rloop(i,b) for(ll i=b;i>=0;i--) //from [b to 0]  	
#define arin(ar)  loop(i,sizeof(ar)/sizeof(ar[0])) cin>>ar[i];
#define show(ar)  loop(i,sizeof(ar)/sizeof(ar[0])) cout<<ar[i]<<" ";
#define For(i,a,b) for (ll i = a;(a<b)?i<b:i>=b;(a<b)?i++:i--)//from [a to b)or[b to a]
//Data Types
#define ll long long
#define ulli unsigned long long ll
#define rt5 pow(5,0.5)
#define fib(n) (pow((1+rt5),n)-pow((1-rt5),n))/(pow(2,n)*rt5)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define INF 1000000008
//Bits
#define clz(n)    __builtin_clz(n)
#define ones(n)   __builtin_popcount(n)
#define parity(n) __builtin_parity(n)
#define ctz(n)    __builtin_ctz(n)
//Vector
#define vec(v) vector<ll> v
#define pb(a) push_back(a)
#define pii pair<ll,ll>
#define pbp(a,b) push_back({a,b})
#define all(a) (a.begin(),a.end()) 
#define fs first
#define sc second
//Google
#define Case cout<<"Case #"<<cs++<<": ";
//Output
#define out(k) if(k) cout<<"Yes\n"; else cout<<"No\n";
//***	USEFUL FUNCTIONS	***
//	GCD of a & b
ll gcd(ll a, ll b)
{if (b == 0) return a;
 return gcd(b, a % b);} 
//	LCM of a & b
ll lcm(ll a, ll b) 
{return (a / gcd(a, b)) * b;}
//	MODULO of a * b
ll modulo(long long a, long long b){
	a=a*b;
	while(a>=mod) a-=mod;
	return a;
}// Calculates (x^n) % m in O(logN)
ll modpow(ll x, ll n, ll m) {
	if (n == 0) return 1%m;
	long long u = modpow(x,n/2,m);
	u = (u*u)%m;
	if (n%2 == 1) u = (u*x)%m;
	return u;
}
bool flag=true;
ll cs=1;
main()
{
	fast
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,rq,w;
		cin>>n>>rq>>w;
		map<ll,ll> mp;
		loop(i,n){
			ll a;
			cin>>a;
			mp[a]++;
		}
		bool flg=false;
		if(w>=rq){
			flg=true;
		}
		else{
			ll sum=w;
			for(auto it : mp){
				if(it.second > 1){
					sum+=(it.second - it.second % 2) *it.first;
				}
				if(rq<=sum){
					flg=true;
					break;
				}
			}
		}
		out(flg);
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
