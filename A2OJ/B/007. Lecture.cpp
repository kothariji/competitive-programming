#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,x,n) for(ll i = x;i<n;i++)


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    map<string, string> mp;
    loop(i,0,m){
        string a, b;
        cin>>a>>b;
        if(a.size() <= b.size())mp[a] = a, mp[b] = a;
        else mp[b] = b, mp[a] = b;
    }
    loop(i,0,n){
        string s;
        cin>>s;
        cout<<mp[s]<<" ";
    }
}
