#include<bits/stdc++.h>
#define ll          long long
#define vll         vector<long long>
#define ALL(a)      (a).begin(),(a).end()
#define f(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll ansf=0;
void io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
}
void solve(){
    int n,x,k,p;
    cin>>n>>x>>p>>k;vll a(n);p--;k--;
    f(i,0,n)cin>>a[i];
    sort(ALL(a));
    if(a[p]==x){
        cout<<0<<endl;
        return;
    }
    if(a[p]<x){
        if(k>p) cout<<-1<<endl;
        else{
            ll pos=-1,pos2=-1;
            f(i,k,n){
                if(a[i]==x){
                    pos=i;
                    break;
                }
                if(a[i]>x){
                    pos2=i;
                    break;
                }
            }
            if(pos!=-1) cout<<pos-p<<endl;
            else {
                if(pos2==-1) pos2=n;
                cout<<pos2-p<<endl;
            }
        }

    }
    else{
        if(k<p){
            cout<<-1<<endl;
        }
        else{

            ll pos=-1,pos2=-1;
            for(ll i=p;i>=0;i--){
                if(a[i]==x){
                    pos=i;
                    break;
                }
                if(a[i]<x){
                    pos2=i;
                    break;
                }
            }

            if(pos!=-1){
                cout<<p-pos<<endl;
            }
            else{
                cout<<p-pos2<<endl;
            }
        }
    }
    return;
}
int main()
{
    hs;
    ll t=1;
    cin>>t;
    while(t--)
    {solve();}
    return 0;
}

