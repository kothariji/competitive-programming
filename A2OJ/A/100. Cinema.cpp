#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 2005
using namespace std;

int cinema[MAX][MAX];
int visited[MAX][MAX];
int n,m,k,x,y,a,b;

bool solve(int x,int y,int k) 
{
    int l=max(1,x-k);
    int r=min(x+k,n);
     int t;
    for(int i=l; i<r+1; i++)
    {
        t=k-abs(i-x);
        if (y-t>0&&!visited[i][y-t]) 
            return a=i,b=y-t,1;
        if (y+t<=m&&!visited[i][y+t]) 
            return a=i,b=y+t,1;
    }
    return 0;
}


int main() 
{
    
    cin>>n>>m>>k;
    for(int t=0; t<k; t++)
    {
        cin>>x>>y;
        for(int i=-2; i< 3;i++)
        {
            for(int j=-1; j<3; j++)
            {
                if (x+i<1||x+i>n||y+j<1||y+j>m) 
                    continue;
                cinema[x][y] = max(cinema[x][y],cinema[x+i][y+j]-abs(i)-abs(j));
            }
        }
        while (!solve(x,y,cinema[x][y]))
            cinema[x][y]++;
        cout<<a<<" "<<b<<endl;
        visited[a][b]=1;
    }
    return 0;
}