#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long
const  int INF=1e15+7;
const int mod=1000000007;
typedef vector<int> vi;
#define pb push_back
#define f first
#define s second
typedef pair<int,int> pii;


signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
      
     int n,h;
     cin>>n>>h;
     
     vector<int> row(n+2,0);
     row[0]=n;
     for(int i=0;i<n;i++)
     {
         int a,b;
         cin>>a>>b;
         row[a+1]-=1;
         row[b+2]+=1;
     }
     for(int i=0;i<=n;i++)
     row[i+1]+=row[i];
     
     for(int i=0;i<=n;i++)
     row[i+1]+=row[i];
   
     int ans=INF;
     for(int i=h;i<=n+1;i++)
      ans=min(ans,row[i]-row[i-h]);
      cout<<ans<<endl;
    }
    return 0;
}
