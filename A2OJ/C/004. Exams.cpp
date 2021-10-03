#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,x,n) for(ll i = x;i<n;i++)
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    loop(i,0,n){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());
    ll prev = min(v[0].first, v[0].second);
    loop(i, 1, n){
        prev = (v[i].second >= prev ? min(v[i].first, v[i].second) : v[i].first);
    }
    cout<<prev;
}
