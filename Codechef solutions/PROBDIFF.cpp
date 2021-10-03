//Solution By Hardik Mittal
//Question :- https://www.codechef.com/AUG21B/problems/PROBDIFF
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007

void solve()
{
    ll i,a;
    unordered_map <ll,ll> m;

    for(i=0;i<4;i++)
    {
        cin>>a;
        m[a]++;
    }

    a=0;
    for(auto x: m)
    {
        a++;
    }

    if(a<2)
    {
        cout<<"0"<<endl;
    }
    else if(a==2)
    {
        for(auto x: m)
        {
            if(x.second==1)
            {
                cout<<"1"<<endl;
                return;
            }
        }
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
