#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define sz(x) (int)(x).size()
#define forn(i,n) for(int i=0;i<(n);++i)

//#define ull unsigned long long int
#define int long long int
#define all(x)             (x).begin(),(x).end()
#define MOD 1000000007
#define mac 998244353
#define mp make_pair
#define loop(i,a,b) for (int i=a;i<=b;i++)
#define ss second
#define ff first

const char nl = '\n';
const char sp = ' ';
const int mod = 1000000007;
//const int lol = 10007;

 
 
void solve()
{   
    map<char,int> first,second;
    first['a'] = second['a'] = 1;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a,b; string s;
        cin>>a>>b>>s;
        map<char,int> m;
        for(auto i : s)  m[i]++;
 
        if(a==1){
            for(auto i : m){
                first[i.first]+=b*i.second;
            }
        }
        else{
            for(auto i : m){
                second[i.first]+= (b*i.second);
            }
        }
        auto l = first.begin(), r = second.end();
        bool check = 1;
        r--;
        while((*l).first>=(*r).first){
            if((*l).second>=(*r).second){
                check = 0;
            }
            bool now =0;
            bool dow = 0;
            if(r!=second.begin())
            {
                r--;
                now = 1;
            }
            if(l!=first.end()) l++;
 
            if(l!=first.end()) dow = 1;
 
 
            if(now && dow) continue;   
            if(now == 0 && dow == 1) check = 0;
            if(!(now||dow)) break;
 
        }
        if(l!=first.end()){
            if((*l).first>(*r).first) {
                check = 0;
            }
        }
        if(check) cout<<"YES\n"; else cout<<"NO\n";
    }
}
 
 


signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T=1; 
    cin >> T;

    
    for(int tc = 1; tc <= T; tc++)
    {
        //cout << "Case #" << tc << ": ";
        solve(); 
    }
   
    return 0;  
}

