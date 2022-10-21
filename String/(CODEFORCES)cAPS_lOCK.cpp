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
    string s; cin>>s;
    int n = s.size();
    bool k = true;

    for(int i=1;i<n && k;i++)
    {
        if(islower(s[i]))
        {
            k = false;  
        } 
    }
    bool fail = false;
    if(s[0]==toupper(s[0])) 
    {
        fail=true;
    }
    if(k)
    {
        for(auto &i : s) i = tolower(i);
        if(!fail) s[0] = toupper(s[0]);
    }
    cout<<s<<nl;
}
 
 
 


signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T=1; 
    //cin >> T;

    
    for(int tc = 1; tc <= T; tc++)
    {
        //cout << "Case #" << tc << ": ";
        solve(); 
    }
   
    return 0;  
}

