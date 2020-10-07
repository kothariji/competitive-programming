#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define w(x)            ll X; cin>>X; while(X--)
#define fast            std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb              push_back
#define vec             vector<ll>
#define take_n_inputs   ll n; cin>>n; while(n--){ll ele; cin>>ele; v.pb(ele);}
#define inf             1e9
#define sort_asc        sort(v.begin(),v.end());
#define sort_desc       sort(v.begin(),v.end(),greater<ll>());
#define yes             cout << "YES" << endl
#define no              cout << "NO" << endl
#define len(c)          c.size()
#define all(c)          c.begin(), c.end()
#define rall(c)         c.rbegin(), c.rend()
#define trav(x,c)       for(auto &x : c)
#define rep(a,n)        for(ll i = a ; i < n ; ++i)
#define rrep(a,n)       for(ll i = n-1 ; i >= a ; --i)
int main()
{
  fast
    
    ll n; cin>>n;
    if(n%2)
    {
        cout<<(n-1)/2<<endl;
        rep(0,(n-1)/2 - 1)
        cout<<"2"<<" ";
        cout<<"3";
 
    }
    else
    {
        cout<<n/2<<endl;
        rep(0,n/2)
        cout<<"2"<<" ";
    }
    
 
  
  return 0;
}
