#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    ll int m =500, n = 500;
    ll int a[n+1][m+1];
    for(ll int i=0; i<m+1; i++)
    {
        a[0][i] = 1;
    }
    for(ll int i=0; i<n+1; i++)
    {
        a[i][0] = 1;
    }
    a[0][0] = 0;
    for(ll int i=1; i<n+1; i++)
    {
        for(ll int j=1; j<m+1; j++)
        {
            a[i][j] = (a[i-1][j] + a[i][j-1])% mod;
        }
    }
    while(t--)
    {
    
        cin>>n>>m;
        cout<<a[n][m]<<endl;
    }
    return 0;
}
