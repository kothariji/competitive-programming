#include <bits/stdc++.h>
using namespace std;
#define int long long
 
bool isCyclePresent(int u, vector<int> adj[], vector<bool> &vis, vector<bool> &recStack)
{
    vis[u] = true;
    recStack[u] = true;
    
    for(auto x:adj[u])
    {
        if(!vis[x] && isCyclePresent(x, adj, vis, recStack))
        {
            return true;
        }
        else if(recStack[x])
        {
            return true;
        }
    }
    recStack[u] = false;
    return false;
}
void dfs(int u, vector<int> adj[], vector<bool> &vis, stack<int>&st)
{
    vis[u] = 1;
    for(auto x:adj[u])
    {
        if(!vis[x])
        {
            dfs(x, adj, vis, st);
        }
    }
    st.push(u);
}
signed main()
{
    int n, m;
    cin>>n>>m;
    
    int inf = 1e18;
    vector<int> adj1[n+1];
    vector<int> adj2[n+1];
    
    
    for(int i=0; i<m; i++)
    {
        int from, to;
        cin>>from>>to;
        
        adj1[from].push_back(to);
        adj2[to].push_back(from);
        
    }
    vector<bool> vis1(n+1, false);
    vector<bool> vis2(n+1, false);
    
    vector<bool> recStack(n+1, false);
    for(int i=1; i<=n; i++)
    {
        if(!vis1[i])
        {
            if(isCyclePresent(i, adj1, vis1, recStack))
            {
                cout<<"IMPOSSIBLE"<<endl;
                return 0;
            }
        }
    }
    
    stack<int> st;
    for(int i=1; i<=n; i++)
    {
        if(!vis2[i])
        {
            dfs(i, adj1, vis2, st);
        }
    }
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    
    
}