#include<bits/stdc++.h>
 
using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000000
#define ll long long
#define db double
#define str string
#define pb push_back
#define For(i,s,e) for (ll i=(s); i<(e); i++)
#define Forrev(i,s,e) for (ll i=(s); i>=(e); i--)
#define all(v) v.begin(),v.end()

#define vll vector<ll>
#define vs vector<string>
#define mapll map<ll,ll>
#define pll pair<ll,ll>
#define initialise(a, x) memset(a, x, sizeof(a))
#define maxheap priority_queue<ll>
#define minheap priority_queue<ll,vector<ll> ,greater<ll>>

#define ff first
#define ss second
#define endl "\n"
#define mp make_pair
const ll mod=1e9 + 7;

ll takemod(ll a) {
    return ((a%mod)+mod)%mod;
}

ll gcd(ll a, ll b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);        
}

ll fast_exp(ll base, ll expo) {
    ll res=1;
    while(expo>0) {
        if(expo&1) res=(res*base)%mod;
        base=(base*base)%mod;
        expo>>=1;}
    return res;
}

ll modinv(ll a) {
    return takemod(fast_exp(takemod(a), mod-2));
}


signed main() 
{
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("C:/IO/in.txt", "r", stdin);
    freopen("C:/IO/out.txt", "w", stdout);
    #endif
    ll t,n;
    cin>>t;
    For(l,0,t)
    {
        cin>>n;
        ll arr[n];
        For(i,0,n)
        {
            cin>>arr[i];
        }

        ll x;
        cin>>x;

        ll i=0,j=n-1,sum1=0,sum2=0;
        ll sumarr[n];
        memset(sumarr,0,sizeof(sumarr));

        ll markarr[n];
        memset(markarr,-1,sizeof(markarr));

        while(i<=j)
        {
                if(i==j)
                {
                    if(markarr[i]!=-1)
                        break;
                    ll ans1=0,ans2=0;
                    For(k,0,n)
                    {
                        //cout<<markarr[i]<<endl;
                        if(markarr[k]==1)
                            ans1++;
                        else if(markarr[k]==2)
                            ans2++;
                    }
                    //cout<<ans1<<"XX"<<ans2<<endl;
                    if(ans1>=ans2)
                    {
                        markarr[i]=1;
                        i++;
                    }
                    else
                    {
                        markarr[i]=2;
                        j--;
                    }
                }
                else
                {
                    sum1=0,sum2=0;
                    sum2=arr[j];
                    markarr[j]=2;
                    while(i<j and sum1<x*sum2)
                    {
                        if(sum1+arr[i]-sumarr[i]>x*sum2)
                        {
                            sumarr[i]+=x*sum2-sum1;
                            sum1=sum2;
                            markarr[i]=1;
                            if(sumarr[i]==arr[i])
                                i++;
                            break;
                        }
                        else
                        {
                            sum1+=arr[i]-sumarr[i];
                            markarr[i]=1;
                            i++;
                        }
                    }
                    j--;
                    //cout<<i<<" "<<j<<endl;

                }
                
        }

        ll ans1=0,ans2=0;
        For(k,0,n)
        {
            //cout<<markarr[k]<<" ";
            if(markarr[k]==1)
                ans1++;
            else if(markarr[k]==2)
                ans2++;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    
    return 0;    
}
