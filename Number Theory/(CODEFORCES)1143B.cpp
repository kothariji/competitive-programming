#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
typedef long long int ll;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD (lli)(1000000000+7)
#define MAXN 100000+1 
#define pb push_back
#define mp make_pair
#define TEST_CASES  ll t;cin >> t;while(t--)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,b,a) for(ll i=(b-1);i>=a;i--)
bool sortbysec(const pair<ll,ll>&a,const pair<ll,ll>&b){ return (a.second < b.second) ; }
ll max(ll a, ll b){ if(a>b) return a ; return b; }
ll min(ll a, ll b){ if(a<b) return a ; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);  }
ll pon(ll r){
    ll p=1;
    while(r!=0){
        p *= r%10;
        if(p==0){
            return p;
        }
        r = r/10;
    }
    return p;
}

void cp(){
    ll n;cin>>n;

    if(n<=9){
        cout<<n<<endl;
        return;
    } 
    else{
    vector<ll>v(11),w(11),z(11);
    rep(i,0,11){
        v[i] = pow(10,i);
    }
    rep(i,0,11){
        if(n>=v[i]){
            w[i] = (n-((n%v[i])+1));
        }
    }
    rep(i,0,11){
        z[i] = max(pon(w[i]),pon(n));
    }

    cout<< *max_element(z.begin(),z.end())<<endl ;
    return ;  
    }
}
int main(){
    fio;
    //TEST_CASES{
        cp();
    //}
    return 0;
}