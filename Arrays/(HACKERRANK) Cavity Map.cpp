#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    char ch[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cin>>ch[i][j];
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i>=1) && (i<(n-1)) && (j>=1) && (j<(n-1)))
            {
            if((ch[i-1][j]<ch[i][j]) && (ch[i+1][j]<ch[i][j]) && (ch[i][j-1]<ch[i][j]) && (ch[i][j+1]<ch[i][j]))
            
                    ch[i][j] = 'X';
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<ch[i][j];
        cout<<endl;
    } 
    return 0;
}
