// author : hrahul2605
#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define int long long
#define f first
#define se second
#define LB lower_bound
#define UB upper_bound
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define pie 3.14159265358979323846264338327950288
const unsigned int MOD = 1000000007;

using namespace std;

const int maxN = 51;
ll n,m;
char a[maxN][maxN];
ll visited[maxN][maxN];
int DFS(int x, int y)
{
    ll ans = 0 ;
    visited[x][y]=1;
    if(x==n && y==m)
        ans = 1;
 
    if(a[x+1][y]!='#' && x+1<=n && !visited[x+1][y])
        ans = ans || DFS(x+1,y);
    if(a[x][y+1]!='#' && y+1<=m && !visited[x][y+1])
        ans = ans || DFS(x,y+1);
    if(a[x-1][y]!='#' && x-1>=1 && !visited[x-1][y])
        ans = ans || DFS(x-1,y);
    if(a[x][y-1]!='#' && y-1>=1 && !visited[x][y-1])
        ans = ans || DFS(x,y-1);
    return ans ;
}
 
int32_t main()
{
    IOS;
    int T;
    cin>>T;
    // T=1;
 
    while(T--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
 
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1 ; j<=m ; j++)
            {
                if(a[i][j]=='B')
                {
                    if(j+1<=m && a[i][j+1]=='.')
                        a[i][j+1] = '#';
                    if(j-1>0 && a[i][j-1]=='.')
                        a[i][j-1] = '#';
                    if(i+1<=n && a[i+1][j]=='.')
                        a[i+1][j] = '#';
                    if(i-1>0 && a[i-1][j]=='.')
                        a[i-1][j] = '#';
                }
            }
        }
 
        ll ans = 1;
        for(int i=1;i<=n;i++){
            for(int j=1; j<=m;j++)
            {
                if(a[i][j]=='G'){
                    memset(visited,0,sizeof(visited));
                   ans*=DFS(i,j); 
                }
            }
        }
 
        for(int i =1; i<=n ; i++)
        {
            for(int j =1; j<=m ; j++){
                if(a[i][j]=='B')
                {
                    if(i+1<=n && a[i+1][j]=='G')
                        ans = 0;
                    if(i-1>0 && a[i-1][j]=='G')
                        ans = 0;
                    if(j+1<=m && a[i][j+1]=='G')
                        ans = 0;
                    if(j-1>0 && a[i][j-1]=='G')
                        ans = 0;
                }
            }
        }
 
        if(ans)cout<<"Yes\n";
        else cout<<"No\n";
    }
  
    return 0;
}