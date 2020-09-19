#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
    int n, m;
    char ans[101][101];
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>ans[j][i];
            if(ans[j][i]=='.')
            {
                if((j+i)%2==0)
                	ans[j][i]='B';
                else 
                	ans[j][i]='W';
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cout<<ans[j][i];
        cout<<endl;
    }
    return 0;
}