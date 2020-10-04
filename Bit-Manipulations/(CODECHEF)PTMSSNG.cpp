//THis is a code PTMSSNG from codechef long challenge July which demonstrates easy implementation of unordered list

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long int   

#define all(v) (v).begin(),(v).end()    

#define Blegh ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ugh int z;cin>>z;while(z--){solve();}

/**************************************************************************/
void solve()
{
    int n,i;
    cin>>n;
    unordered_set<ll> x,y;
    ll a,b;
    for(i=0;i<4*n-1;++i){
        cin>>a>>b;
        if(x.count(a))
            x.erase(a);
        else
            x.insert(a);
        if(y.count(b))
            y.erase(b);
        else 
            y.insert(b);
    }cout<<*x.begin()<<" "<<*y.begin()<<"\n";
}

int main() {
    Blegh
    ugh
	return 0;
}
