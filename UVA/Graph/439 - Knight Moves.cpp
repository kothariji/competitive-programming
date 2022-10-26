#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,1,-1,2,2,-2,-2};
int dy[]={-2,-2,2,2,1,-1,1,-1};
int board[10][10];
int lvl[10][10];


void print()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

int bfs(int stx,int sty,int endx,int endy)
{
    if(stx==endx && sty==endy)return 0;
    queue<pair<int,int>>q;
    pair<int,int>p;
    int x,y,a,b;
    q.push({stx,sty});
    lvl[stx][sty]=0;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        x=p.first;
        y=p.second;
        board[x][y]=1;
        //print();
        for(int i=0;i<8;i++)
        {
            a=dx[i]+x;
            b=dy[i]+y;
            if(a>=0 && a<8 && b>=0 && b<8)
            {
                if(board[a][b]==0)
                {
                    q.push({a,b});
                    lvl[a][b]=lvl[x][y]+1;
                    if(a==endx && b==endy) return lvl[a][b];
                }
            }
        }
    }
}



void zer()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            board[i][j]=0;
    }
}
int main()
{
    int x,y,rs,re,stx,sty,endx,endy;
    char cs,ce;
    while(cin>>cs>>rs)
    {
        sty=rs-1;
        stx=cs-'a';
        cin>>ce>>re;
        endy=re-1;
        endx=ce-'a';
        zer();
        cout<<"To get from "<<cs<<rs<<" to "<<ce<<re<<" takes "<<bfs(stx,sty,endx,endy)<<" knight moves."<<endl;
    }
    return 0;
}
