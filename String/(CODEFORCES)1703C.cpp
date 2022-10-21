#include <bits/stdc++.h>
using namespace std;

const char nl    = '\n';
const char space = ' ';

typedef long long ll;
#define MOD 1000000007

void solve()
{   
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];
    int k=0;
    while(k<n)
    {
        int p;
        cin>>p;

        char u[p];
        for(int i=0;i<p;i++){ cin>>u[i];}
        for(int i=p-1;i>=0;i--)
        {
            if(u[i]=='U')
            {
                if(a[k]==0) {a[k]=9;}
                else
                {
                    a[k]--;
                }
            }
            else
            {
                if(a[k]==9) {a[k]=0;}
                else
                {
                    a[k]++;
                }
            }
             
        }
        k++;
       
    }
    for(int i=0;i<n;i++) cout<<a[i]<<space;
        cout<<nl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
   
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif
    
    int T=1; 
    cin >> T;

    for(int tc = 1; tc <= T; tc++)
    {
        //cout << "Case #" << tc << ": ";

        solve();
    }
    
    return 0;
    
}

 
