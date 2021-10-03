// author : hrahul2605
#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define int long long
#define f first
#define se second
#define LB lower_bound
#define UB upper_bound
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define pie 3.14159265358979323846264338327950288
const unsigned int MOD = 1000000007;

using namespace std;

int32_t main()
{
    IOS;int T;T=1;
    // cin>>T;
    while(T--)
    {
        string s;cin>>s;
        ll ans = 0,mx=-1;
        ll k;cin>>k;
        char key = 'a';
        map<char,int>m;
        for(int i=0;i<26;i++)
        {
            ll x;cin>>x;
            mx = max(mx,x);
            m[key]=x;
            key++;
        }
        for(int i=0;i<s.size();i++)
            ans+=m[s[i]]*(i+1);
        for(int i=s.size()+1 ; i<=s.size()+k ; i++)
            ans+=i*mx;
        cout<<ans;
    }

    return 0;
}