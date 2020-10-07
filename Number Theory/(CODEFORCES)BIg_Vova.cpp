#include <bits/stdc++.h>
    #include <math.h>
 
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    # define M_PI  3.14159265358979323846
 
 
    const int M=1e9+7;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }
 
    ll modPow(ll a, ll b){
        if(b==0)
            return 1LL;
        if(b==1)
            return a%M;
        ll res=1;
        while(b){
            if(b%2==1)
                res=mul(res,a);
            a=mul(a,a);
            b=b/2;
        }
        return res;
    }
 
    int ok(vector<int>v, ll sum){
        int n=v.size();
        ll total=0;
        // cout<<"baby "<<sum<<"\n";
        for(int i=0;i<n;i++){
            // cout<<"yo "<<total<<"\n";
            if(total==(sum/2))
                return 1;
            total+=v[i];
        }
        // cout<<"ozz "<<"\n";
        return 0;
    }
 
    void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n),vis(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int d=0;
        for(int i=0;i<n;i++){
            int ind=0;
            int maxi=0;
            for(int j=0;j<n;j++){
                if(!vis[j] && __gcd(d,a[j])>maxi){
                    maxi=__gcd(d,a[j]);
                    ind=j;
                }
            }
            d=maxi;
            vis[ind]=1;
            b[i]=a[ind];
        }
        for(auto i : b)
            cout<<i<<" ";
        cout<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
//            cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }