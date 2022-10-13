#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
using pi = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vector<int> >;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()

const int inf = 9e18;
const int NUM=1000030;
const int N = 10000000;
vector<int> lp, sieve;
vector<int> pr;
void primefactor();
int binpow(int a, int b);
int binpow(int a, int b, int mod);
int gcd(int a, int b);
int lcm (int a, int b);
bool comp(int a, int b);
int inversemod(int a, int mod);
void calc_sieve();

bool valid(int a, int b, int n, int m, vector<string>& arr)
{
    if(a>=0 && a<n && b>=0 && b<m)
    {
        if(arr[a][b]!='#') return true;
        else return false;
    }
    return false;
}

void printpath(int a, int b, int n, int m, vector<string>& arr, vector<vector<pi> >& parent)
{
    string path;
    while(arr[a][b]!='A')
    {
        if(parent[a][b].ff==a)
        {
            if(parent[a][b].ss+1==b) path.pb('R');
            else path.pb('L');
        }
        else 
        {
            if(parent[a][b].ff+1==a) path.pb('D');
            else path.pb('U');
        }
        int x=parent[a][b].ff, y=parent[a][b].ss;
        a=x;
        b=y;
    }
    reverse(all(path));
    cout<<sz(path)<<endl;
    cout<<path<<endl;
}

void test()
{
    int n, m;
    cin>>n>>m;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vvi visited(n, vi(m, 0)), mindist(n, vi(m, inf)), dist(n, vi(m, inf));

    queue<pi> bfsmonster;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) if(arr[i][j]=='M') 
        {
            bfsmonster.push(mp(i, j));
            visited[i][j]=1;
            mindist[i][j]=0;
        }
    }
    int movx[]={1, -1, 0, 0};
    int movy[]={0, 0, -1, 1};
    while(!bfsmonster.empty())
    {
        pi temp=bfsmonster.front();
        bfsmonster.pop();
        for(int i=0;i<4;i++) 
        {
            int x=temp.ff+movx[i];
            int y=temp.ss+movy[i];
            if(valid(x, y, n, m, arr))
            {
                if(!visited[x][y])
                {
                    mindist[x][y]=mindist[temp.ff][temp.ss]+1;
                    visited[x][y]=1;
                    bfsmonster.push(mp(x, y));
                }
            }
        }
    }

    vector<vector<pi> > parent(n, vector<pi>(m));
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) visited[i][j]=0;
    }
    queue<pi> bfs;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) if(arr[i][j]=='A') 
        {
            bfs.push(mp(i, j));
            visited[i][j]=1;
            dist[i][j]=0;
        }
    }

    while(!bfs.empty())
    {
        pi temp=bfs.front();
        bfs.pop();

        for(int i=0;i<4;i++) 
        {
            int x=temp.ff+movx[i];
            int y=temp.ss+movy[i];
            if(valid(x, y, n, m, arr))
            {
                if(!visited[x][y])
                {
                    int tempdist=dist[temp.ff][temp.ss]+1;
                    if(tempdist<mindist[x][y])
                    {
                        parent[x][y]=temp;
                        visited[x][y]=1;
                        dist[x][y]=tempdist;
                        bfs.push(mp(x, y));
                    }
                }
            }
        }
    }
    
    for(int i=0;i<n;i++) 
    {
        if(visited[i][0])
        {
            // cerr<<i<<" "<<0<<endl;
            cout<<"YES"<<endl;
            printpath(i, 0, n, m, arr, parent);
            return;
        }
        if(visited[i][m-1])
        {
            // cerr<<i<<" "<<m-1<<endl;
            cout<<"YES"<<endl;
            printpath(i, m-1, n, m, arr, parent);
            return;
        }
    }
    for(int j=0;j<m;j++) 
    {
        if(visited[0][j])
        {
            // cerr<<0<<" "<<j<<endl;
            cout<<"YES"<<endl;
            printpath(0, j, n, m, arr, parent);
            return;
        }
        if(visited[n-1][j])
        {
            // cerr<<n-1<<" "<<j<<endl;
            cout<<"YES"<<endl;
            printpath(n-1, j, n, m, arr, parent);
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main()
{
//    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--) test();
    return 0;
}

//    1. Take care of the corner cases, write one or two tests that seem to be the cases.
//    2. Check the bounds on the intput and decide the algorithm.
//    3. Make the test cases for the bounds, try to include 0, 1, 2 cases in the new test cases, and if possible, scale the cases.
//    4. Check for overflow and the array bounds carefully, always take care of the decreasing loop.

void calc_sieve() //credits: Anish_Sofat
{
    sieve.resize(NUM+1,0);
    for (int x = 2; x <= NUM; x++)
        {
            if (sieve[x]) continue;
            for (int u = x; u <= NUM; u += x)
            {
                    sieve[u] = x ;
            }
        }
}

void primefactor()
{
    lp.resize(N+1,0);
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int binpow(int a, int b)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int binpow(int a, int b, int mod)
{
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int lcm (int a, int b)
{
    return ((a / gcd(a, b)) * b);
}

bool comp(int a, int b)
{
    return a>b;
}

int inversemod(int a, int mod)
{
    return binpow(a,mod-2, mod);
}
