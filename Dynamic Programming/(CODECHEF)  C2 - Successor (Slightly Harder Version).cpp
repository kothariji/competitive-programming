#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define MP make_pair
#define pb push_back
#define FS first
#define SC second
#define INF 1LL<<60
#define all(v) v.begin(), v.end()

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef long long ll;
typedef pair<long long,int> pli;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set_int;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> ordered_set_ii;

// find_by_order() - returns an iterator to the k-th smallest element(0-based)
// order_of_key() - the number of items in a set that are strictly smaller than our item

int n;
char s[1005][1005];
int dp[1005][1005];
int ans;

void dfs(int u,int v)
{
    if(s[u][v]=='D')
    {
        if(u+1>=n)
        {
            dp[u][v] = (u+v)%2;
            if(dp[u][v]==0)
                ans++;
        }
        else if(dp[u+1][v]!=-1)
        {
            if(dp[u+1][v]==0)
                ans++;
        }
        else
        {
            dfs(u+1,v);
            dp[u][v] = dp[u+1][v];
        }
    }
    else if(s[u][v]=='L')
    {
        if(v-1<0)
        {
            dp[u][v] = (u+v)%2;
            if(dp[u][v]==0)
                ans++;
        }
        else if(dp[u][v-1]!=-1)
        {
            if(dp[u][v-1]==0)
                ans++;
        }
        else
        {
            dfs(u,v-1);
            dp[u][v] = dp[u][v-1];
        }
    }
    else if(s[u][v]=='R')
    {
        if(v+1>=n)
        {
            dp[u][v] = (u+v)%2;
            if(dp[u][v]==0)
                ans++;
        }
        else if(dp[u][v+1]!=-1)
        {
            if(dp[u][v+1]==0)
                ans++;
        }
        else
        {
            dfs(u,v+1);
            dp[u][v] = dp[u][v+1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s[i][j];
                dp[i][j] = -1;
            }
        }
        ans = 0;
        for(int i=0;i<n;i++)
        {
            dfs(0,i);
        }
        cout << ans << "\n";
    }
    return 0;
}

