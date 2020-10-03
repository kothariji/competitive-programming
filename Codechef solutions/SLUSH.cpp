#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long int ull;
#define pb push_back
#define mp make_pair
#define iso ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const ll mod=1e9+7;
ll prime[100005];
void sieve()
{
    prime[0]=1;prime[1]=1;
    for(int i=2;i*i<100005;i++)
    {
        for(int j=i*2;j<100005;j+=i)
            prime[j]=1;
    }
}
ll gcd(ll a,ll b)
{

    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
////////////////////////////
ll c[1000005],d[1000005],b[1000005],f[1000005],arr[1000005];
int main()
{
    iso;
    ll i,m,n,a,g,t;
    ll ans;

    cin>>t;
    while(t--)
    {
        stack < pair<ll,ll> >st;
        ans=0;

        cin>>n>>m;
        for(i=0;i<1000005;i++)
            arr[i]=0;
        for(i=1;i<=m;i++)
        {
            cin>>c[i];

        }
        for(i=0;i<n;i++)
        {
            cin>>d[i]>>f[i]>>b[i];
            if(c[d[i]]>0)
            {
                ans+=f[i];
                c[d[i]]--;
                arr[i]=d[i];
            }
            else
            {
                ans+=b[i];

            }

        }
        for(i=1;i<=m;i++)
        {
            if(c[i]>0)
                {
                    st.push(mp(i,c[i]));

                }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                a=st.top().first;
                g=st.top().second;
                arr[i]=a;
                st.pop();
                if(g-1>0)
                    st.push(mp(a,g-1));
            }
        }
        cout<<ans<<"\n";
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";

    }

    return 0;

}

