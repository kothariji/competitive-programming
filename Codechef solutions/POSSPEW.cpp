//Solution By Hardik Mittal
//Question :- https://www.codechef.com/START11B/problems/POSSPEW
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007

void solve()
{
    ll i,j,n,k;
    cin>>n>>k;

    ll a[n],sum=0,active=0;
    bool flag=false;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]!=0)
        {
            flag=true;
            active++;
        }
    }

    if(flag==false||k==0)
    {
        cout<<sum<<endl;
        return;
    }
    else
    {
        ll dp[n];
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                dp[i]=INT_MAX-1;
            }
            else
            {
                dp[i]=0;
            }
        }

        for(i=1;i<n;i++)
        {
            if(dp[i-1]+1<dp[i])
            {
                dp[i]=dp[i-1]+1;
            }
        }
        if(dp[n-1]+1<dp[0])
        {
            dp[0]=dp[n-1]+1;
        }

        for(i=1;i<n;i++)
        {
            if(dp[i-1]+1<dp[i])
            {
                dp[i]=dp[i-1]+1;
            }
        }


        for(i=n-2;i>=0;i--)
        {
            if(dp[i+1]+1<dp[i])
            {
                dp[i]=dp[i+1]+1;
            }
        }
        if(dp[0]+1<dp[n-1])
        {
            dp[n-1]=dp[0]+1;
        }

        for(i=n-2;i>=0;i--)
        {
            if(dp[i+1]+1<dp[i])
            {
                dp[i]=dp[i+1]+1;
            }
        }

        ll s[n]={0};
        for(i=0;i<n;i++)
        {
            s[dp[i]]++;
        }

        j=1;
        while(s[j]!=0&&k!=0)
        {
            k--;
            sum+=(2*active);
            active+=s[j];
            j++;
            if(j==n)
            {
                break;
            }
        }

        if(k)
        {
            sum+=(2*active*k);
        }

        cout<<sum<<endl;
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
