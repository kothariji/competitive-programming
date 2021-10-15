#include<bits/stdc++.h>
using namespace std;
#define bug cout<<" *H* ";
#define nxtl cout<<"\n";
//fors
#define loop(i,b) for(int i=0;i<b;i++)
#define rloop(i,b) for(int i=b;i>=0;i--) //from [b to 0]  	
#define arin(ar)  loop(i,sizeof(ar)/sizeof(ar[0])) cin>>ar[i];
#define show(ar)  loop(i,sizeof(ar)/sizeof(ar[0])) cout<<ar[i]<<" ";
#define For(i,a,b) for (int i = a;(a<b)?i<b:i>=b;(a<b)?i++:i--)//from [a to b)or[b to a]
//Data Types
#define ll long long
#define ulli unsigned long long int
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
#define vec(v) vector<int> v
#define pb(a) push_back(a)
#define pii pair<int,int>
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
int gcd(int a, int b)
{if (b == 0) return a;
 return gcd(b, a % b);} 
//	LCM of a & b
int lcm(int a, int b) 
{return (a / gcd(a, b)) * b;}
//	MODULO of a * b
int modulo(long long a, long long b){
	a=a*b;
	while(a>=mod) a-=mod;
	return a;
}// Calculates (x^n) % m in O(logN)
int modpow(int x, int n, int m) {
	if (n == 0) return 1%m;
	long long u = modpow(x,n/2,m);
	u = (u*u)%m;
	if (n%2 == 1) u = (u*x)%m;
	return u;
}
bool flag=true;
int cs=1;
main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ln=s.size();
		int ar0[ln],ar1[ln],dp0[ln+2],dp1[ln+2];
		int p1=ln,p0=ln;
		rloop(i,ln-1){
			if(s[i]-48==0) p0=i;
			else 	p1=i;
			ar0[i]=min(p0,ln);
			ar1[i]=min(p1,ln);
		}
		dp0[ln]=dp0[ln+1]=0;
		dp1[ln]=dp1[ln+1]=0;
		rloop(i,ln-1){
			dp0[i]=dp0[i+1];
			if(s[i]=='0'&&ar1[i]<ln){
				dp0[i]=max(dp0[i],dp0[ar1[i]+1]+1);
			}
			if(s[i]=='1'&&ar0[i]<ln){
				dp0[i]=max(dp0[i],dp0[ar0[i]+1]+1);
			}
			dp1[i]=dp1[i+1];
			if(ar1[i]<ln){
				dp1[i]=max(dp1[i],dp0[ar1[i]+1]+1);
			}
		}
		// cout<<ar0[0]<<" "<<ar1[0];
		if(ar0[0]==ln) cout<<0;
		else if(ar1[0]==ln) cout<<1;
		else{
			int k=dp1[0]+1,x=ar1[0]+1;
			string ans="1";
			for(int i=1;i<k;i++){
				if(x>=ln){
					ans+='0';
					continue;
				}
				if(ar0[x]>=ln){
					ans+='0';
					x=ar0[x]+1;
					continue;
				}
				if(dp0[ar0[x]+1]<k-i-1){
					ans+='0';
					x=ar0[x]+1;
				}
				else{
					ans+='1';
					x=ar1[x]+1;
				}
			}
			cout<<ans;
		}	
		nxtl;
	}
	cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
