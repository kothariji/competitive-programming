Problem- TREEPREM

#include<bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
vector<long long> graph[100001];
long long A[1000001];
long long B[1000001];
long long con[1000001];
long long a[100001];
long long b[100001];
long long par[100001];
long long h[100001];
long long vis[100001];
vector<long long> sset;
priority_queue<pair<long long,long long> > LT;
long long n,s;
long long TEMP;
void solve1(long long SUP,long long d)
{
    vis[SUP]++;
    h[SUP] = d;
    bool is_it = true;
    for(long long CHD:graph[SUP])
    {
        if(!vis[CHD])
        {
            par[CHD] = SUP;
            solve1(CHD,d+1);
            is_it = false;
        }
    }
    if(is_it==true)
        LT.push({d,SUP});
}
void done()
{
    for(long long i=0;i<n+1;i++)
    {
        graph[i].clear();
        a[i] = 0;
        b[i] = 0;
        par[i] = 0;
        h[i] = 0;
    }
    while(!LT.empty())
        LT.pop();
}
void clean(long long SUP)
{
    con[a[SUP]] = 0;
    con[b[SUP]] = 0;
    A[a[SUP]] = 0;
    A[b[SUP]] = 0;
    B[a[SUP]] = 0;
    B[b[SUP]] = 0;
}
int solve2(long long SUP)
{
    B[b[SUP]]++;
    A[a[SUP]]++;
    if(A[a[SUP]]==B[a[SUP]] && con[a[SUP]]!=0)
    {
        con[a[SUP]]--;
        TEMP--;
    }
    else if(con[a[SUP]]==0)
    {
        con[a[SUP]]++;
        TEMP++;
    }
    if(A[b[SUP]]==B[b[SUP]] && con[b[SUP]]!=0)
    {
        con[b[SUP]]--;
        TEMP--;
    }
    else if(con[b[SUP]]==0)
    {
        con[b[SUP]]++;
        TEMP++;
    }
    vis[SUP]++;
    sset.push_back(SUP);
    if(TEMP==0)
    {
        if(vis[par[SUP]]==0 && SUP!=1)
            LT.push(make_pair(h[par[SUP]], par[SUP]));
        clean(SUP);
        return 1;
    }
    if(SUP==1)
    {
        clean(SUP);
        return 0;
    }
    if(vis[par[SUP]]==0)
    {
        if(solve2(par[SUP])==1)
        {
            clean(SUP);
            return 1;
        }
    }
    clean(SUP);
    return 0;
}
int sol()
{
    cin>>n>>s;
    for(long long i=0;i<n-1;i++)
    {
        long long u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(long long i=1;i<n+1;i++)
        cin>>a[i];
    for(long long i=1;i<n+1;i++)
        cin>>b[i];
    for(long long i=1;i<n+1;i++)
    {
        vis[i] = 0;
        par[i] = 0;
        h[i] = 0;
    }
    solve1(1,1);
    for(long long i=1;i<n+1;i++)
        vis[i]=0;
    bool correct = true;
    vector<vector<long long> > sets;
    while(!LT.empty())
    {
        pair<long long,long long> leaf = LT.top();
        LT.pop();
        if(vis[leaf.second]==0)
        {
            TEMP = 0;
            sset.clear();
            if(solve2(leaf.second)==0)
            {
                correct = false;
                break;
            }
            else
                sets.push_back(sset);
        }
    }
    if(correct==false)
    {
        cout<<0<<endl;
        return 0;
    }
    if(s==1)
    {
        cout<<1<<endl;
        return 0;
    }
    long long a = 1;
    long long x = sets.size();
    for(long long i=0;i<x;i++)
    {
        long long u = sets[i][0];
        long long l = sets[i][0];
        long long sze = sets[i].size();
        for(long long j=1;j<sze;j++)
        {
            if(h[sets[i][j]]>h[l])
                l = sets[i][j];
            if(h[sets[i][j]]<h[u])
                u = sets[i][j];
        }
        long long cnt = 0;
        for(long long c: graph[l])
        {
            if(c!=par[l])
                cnt++;
        }
        a = (a*(cnt+1))%mod;
    }
    cout<<a<<endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long T;
    cin>>T;
    for(long long i=0;i<T;i++)
    {
        sol();
        done();
    }
    return 0;
}