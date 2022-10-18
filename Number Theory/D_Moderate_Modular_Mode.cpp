#include<bits/stdc++.h>
#include<unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define endl '\n' 
#define ll long long
// #define ll int
#define ull unsigned ll
#define sz(v) (int)(v.size())
#define ld long double
#define pb push_back
#define em emplace_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define sai(a,n) sort(a,a+n);
#define sad(a,n) sort(a,a+n,greater<int>());
#define svi(x) sort(x.begin(), x.end());
#define svd(a) sort(a.begin(), a.end(), greater<ll>());
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define fi(i,x,n) for (ll i = x; i < n; i++)
#define vi vector <ll>
#define vvi vector<vi>
#define mp(a1,a2) make_pair(a1,a2)
#define gll ll static
#define rll register ll 
#define reg register
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define vb vector<bool>
#define read(a,n) fi(i,0,n){cin>>a[i];}
#define read_tree(g,m) fi(__i__,0,m) {ll __u__,__u__1;cin>>__u__>>__u__1;g[__u__].em(__u__1);g[__u__1].em(__u__);}
#define mii map<ll, ll>
#define umii unordered_map<ll, ll>
#define msi map<string, ll>
#define mss map<string, string>
#define pqi priority_queue <ll>
#define mci map<char, ll>
#define umci unordered_map<char, ll> 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template<typename T, typename U> static inline void amin(T &x, U y){if(y<x) x=y;}
template<typename T, typename U> static inline void amax(T &x, U y){if(x<y) x=y;}

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
bool pair_sec_inc(pii a, pii b){return a.second > b.second;}
bool pair_sec_dec(pii a, pii b){return a.second < b.second;}
bool pair_fir_dec(pii a, pii b){return a.first > b.first;}
bool pair_fir_dec_sec_inc(pii a, pii b){if (a.first == b.first){return a.second < b.second;}return a.first > b.first;}
ll const MOD = 1e9+7;
ll const N = 2e5+5;
vi g[N];
vb vis(N);

int lp[N+1];
vector<int> pr;
void dfs(ll vertex);
void primes();
ll binpow(ll a, ll b);
ll binpowm(ll a, ll b, ll m);
ll lcm(ll a, ll b);
string bin(ll x);
// ll n,k,m,x,y;
// ll ans(0);

vi fac(int n)
{
    vi v;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                // cout <<" "<< i;
                v.em(i);
 
            else // Otherwise print both
            v.em(i),v.em(n/i);
                // cout << " "<< i << " " << n/i;
        }
    }
    return v;
}

void solve(){

    ll x,y;cin>>x>>y;
    ll n = x;    
    if (x > y)
    {
        n = x + y;
        
    }
    else
    {
        n = y - (y%x)/2;
    }
    

    cout<<n<<endl;


    
}


signed main(){

    FAST
    ll t = 1;
    cin>>t;
    while(t--){
        debug(t)
        solve();

    }
}

void dfs(ll vertex)
{

    
    if (vis[vertex]) return;
    
    debug(vertex)
    vis[vertex]=1;
    
    // 
    for(auto &child : g[vertex])
    {
        // 
        // if (!vis[child])
        // {
            dfs(child);
        // }
        
        // 
    
    }
    // 
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
ll binpowm(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

string bin(ll x){
    if (!x)
    {
        return "0";
    }
    string s;
    while (x)
    {
        s += '0' + x%2;
        x/=2;
    }
    return s;
    
}
void primes(){

    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}
ll lcm(ll a, ll b){
    return ((a*b)/__gcd(a,b));
}