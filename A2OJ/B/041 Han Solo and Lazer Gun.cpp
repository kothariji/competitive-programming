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
        double n,x,y,x1,y1;cin>>n>>x>>y;
        set<double>s;
 
        while(n--)
        {
            cin>>x1>>y1;
            double key = x1 - x ;
            if(key==0)
                s.insert(INT_MAX);
            else
                s.insert((y1-y)/key);
        }
        
        cout<<s.size();
    }

    return 0;
}