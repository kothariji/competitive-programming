#include<bits/stdc++.h>
using namespace std;
//common file for PBDS
#include<ext/pb_ds/assoc_container.hpp>
//including tree_order_statistics_node_update
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
//macro definition
template <typename T>
using ordered_set= tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

//Optimisations (Black Magic 🌑)
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define ll long long
#define lld long double
#define ull unsigned long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repk(i, k, n) for (ll i = k; k < n ? i < n : i > n; k < n ? i++ : i--)
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el<<" ";
#define bit(x) __builtin_popcount(x)
#define bitll(x) __builtin_popcountll(x)
#define popb pop_back
#define pb push_back
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define um unordered_map
#define om ordered_map
#define all(x) (x).begin(),(x).end()
#define minpq priority_queue<ll,vl,greater<ll>>pq;
#define maxpq priority_queue<ll>pq;
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define precision(x, y) fixed << setprecision(y) << x
#define PI 3.1415926535897932384626
#define sz(x) ((ll)(x).size())
#define r_search(a,b) regex_search(a,regex(b))            //search b in a
#define r_match(a,b) regex_match(a,regex(b))              //match b in a
#define r_replace(a,b,c) regex_replace(a,regex(b),c)      //replace b with c in a
#define present(b, a) ((a).find((b)) != (a).end())  //if b is present in a
#define nl '\n'
const ll mod = 1e9 + 7; //1000000007
const ll mod2 = 998244353;
const ll inf = LLONG_MAX;
const lld epsilon = 1e-12;
typedef pair<ll, ll> pl;
typedef pair<char,char> pc;
typedef pair<int, int> pi;
typedef pair<lld, lld> pd;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
typedef vector<int> vi;
typedef vector<pc> vpc;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;

// #ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ------------------------Do not write above this line-----------------------------------------------------------------------------------------------------------------
//Segment-Tree (Max-Update, Max-Query)
//1-based indexing
//pass the vectors as reference
void build_segtree(vl &vec,ll curr,ll l,ll r,vl &segtree,ll n){
    if(l==r){
        segtree[curr]=vec[l];
    }
    else{
        int mid=(l+r)/2;
        build_segtree(vec,2*curr,l,mid,segtree,n);
        build_segtree(vec,2*curr+1,mid+1,r,segtree,n);
        segtree[curr]=max(segtree[2*curr],segtree[2*curr+1]);
    }
}

ll max_segtree(ll curr,ll curr_l,ll curr_r,ll l,ll r,vl &segtree){
    if(l>r){
        return 0;
    }

    if(l==curr_l and r==curr_r){
        return segtree[curr];
    }

    ll mid=(curr_l+curr_r)/2;
    return max(max_segtree(2*curr,curr_l,mid,l,min(r,mid),segtree),max_segtree(2*curr+1,mid+1,curr_r,max(l,mid+1),r,segtree));
}

void update_segtree(ll curr,ll l,ll r,ll pos,ll new_val,vl &segtree){
    if(l==r){
        segtree[curr]=new_val;
    }
    else{
        ll mid=(l+r)/2;
        if(pos<=mid){
            update_segtree(2*curr,l,mid,pos,new_val,segtree);
        }
        else{
            update_segtree(2*curr+1,mid+1,r,pos,new_val,segtree);
        }
        segtree[curr]=max(segtree[2*curr],segtree[2*curr+1]);
    }
}

void solve(){
    ll n;
    cin>>n;
    vl vec(n);
    input(vec);

    vl segtree(4*n+1);
    //TreeBuild
    build_segtree(vec,1,0,n-1,segtree,n); //(input array,curr. vertex,start,end,segtree array,size)

    //Max-query
    cout<<max_segtree(1,0,n-1,0,4,segtree)<<endl;

    //Update-query
    update_segtree(1,0,n-1,2,10,segtree);
    cout<<max_segtree(1,0,n-1,0,2,segtree)<<endl;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    ll t;
    t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
