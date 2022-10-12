#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
using pi = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vector<int> >;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()

template<typename T, typename Y> istream& operator>>(istream& is,  pair<T,Y> &p){ is >> p.first >> p.second; return is;}
template<typename T, typename Y> ostream& operator<<(ostream& os,  pair<T,Y>  p){ os << p.first << ' ' << p.second  << ' '; return os;}
template<typename T> istream& operator>>(istream& is,  vector<T> &v){for (auto& i : v) is >> i; return is;}
template<typename T> ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}

//const int inf = 9e18;
const int NUM=1000030;
const int N = 10000000;
vector<int> lp, sieve;
vector<int> pr;
void primefactor();
int binpow(int a, int b);
int binpow(int a, int b, int mod);
int gcd(int a, int b);
int lcm (int a, int b);
bool comp(int a, int b);
int inversemod(int a, int mod);
void calc_sieve();
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void test()
{
    int n, q;
    cin>>n>>q;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int> > dp(n, vector<int>(n, 0));
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) if(arr[i][j]=='*') dp[i][j]=1;
    }
    for(int i=0;i<n;i++) for(int j=1;j<n;j++) dp[i][j]+=dp[i][j-1];
    for(int i=1;i<n;i++) for(int j=0;j<n;j++) dp[i][j]+=dp[i-1][j];

    for(int i=0;i<q;i++) 
    {
        int x, y, x1, y1;
        cin>>x>>y>>x1>>y1;
        x--;
        y--;
        x1--;
        y1--;
        int ans=dp[x1][y1];
        if(x>0) ans-=dp[x-1][y1];
        if(y>0) ans-=dp[x1][y-1];
        if(x>0 && y>0) ans+=dp[x-1][y-1];
        cout<<ans<<endl;
    }
}

signed main()
{
//    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--) test();
    return 0;
}

//    1. Take care of the corner cases, write one or two tests that seem to be the cases.
//    2. Check the bounds on the intput and decide the algorithm.
//    3. Make the test cases for the bounds, try to include 0, 1, 2 cases in the new test cases, and if possible, scale the cases.
//    4. Check for overflow and the array bounds carefully, always take care of the decreasing loop.

void calc_sieve() //credits: Anish_Sofat
{
    sieve.resize(NUM+1,0);
    for (int x = 2; x <= NUM; x++)
        {
            if (sieve[x]) continue;
            for (int u = x; u <= NUM; u += x)
            {
                    sieve[u] = x ;
            }
        }
}

void primefactor()
{
    lp.resize(N+1,0);
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int binpow(int a, int b)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int binpow(int a, int b, int mod)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int lcm (int a, int b)
{
    return ((a / gcd(a, b)) * b);
}

bool comp(int a, int b)
{
    return a>b;
}

int inversemod(int a, int mod)
{
    return binpow(a,mod-2, mod);
}
