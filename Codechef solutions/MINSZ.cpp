/*
  Author : anonymous377
*/
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
//***    USEFUL FUNCTIONS    ***
//    GCD of a & b
int gcd(int a, int b)
{if (b == 0) return a;
 return gcd(b, a % b);} 
//    LCM of a & b
int lcm(int a, int b) 
{return (a / gcd(a, b)) * b;}
//    MODULO of a * b
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
void read(int &a) {cin>>a;}
void read(int& a,int& b) {cin>>a>>b;}
void read(int& a,int& b,int& c) {cin>>a>>b>>c;}
void read(ll &a) {cin>>a;}
void read(ll& a,ll& b) {cin>>a>>b;}
void read(ll& a,ll& b,ll& c) {cin>>a>>b>>c;}
bool flag=true;
int cs=1;
main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {   
        long l=2;
        long n; cin>>n;
        vector<long> v;

        int sum=0;
        for(long i=60;i>=0;i--){
            if(n & long(pow(l,i))){
                if(sum%2==0){
                    sum++;
                    v.push_back(i+1);
                }
            }
            else{
                if(sum%2){
                    sum++;
                    v.push_back(i+1);
                }
            }
        }
        if(n>0){
            cout<<sum<<"\n";
            for(int i=v.size()-1;i>=0;i--){
                cout<<(long(pow(l,v[i])) - 1)<<" ";
            }
        }
        else
            cout<<2<<"\n"<<"1 1";
        nxtl;
    }
    cerr<<"time taken: "<<(float)clock()/CLOCKS_PER_SEC<<endl;
}
