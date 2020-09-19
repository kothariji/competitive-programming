#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


struct point
{
    int x,y;
}a[4],b[4];


int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

int dis(point a,point b)
{
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}

bool check(point x,point y,point z)
{
    int d[4];
    d[0]=dis(x,y);
    d[1]=dis(y,z);
    d[2]=dis(x,z);
    sort(d,d+3);
    if(d[0]==0) 
    	return false;
    
    if(d[2]==d[1]+d[0]) 
		return true;
    
    return false;
}
int main()
{
    int i,j,k,T;
    cin>>a[1].x>>a[1].y>>a[2].x>>a[2].y>>a[3].x>>a[3].y;
    
        if(check(a[1],a[2],a[3]))
        {
            cout<<"RIGHT";
            return 0;
        }
        int flag=0;
        for(i=1;i<=3;i++)
        {
            for(j=0;j<4;j++)
            {
                for(k=1;k<=3;k++)
                    b[k]=a[k];
                b[i].x=b[i].x+dx[j];
                b[i].y=b[i].y+dy[j];
                if(check(b[1],b[2],b[3])) 
                	flag=1;
            }
        }
        if(flag == 1)
        	cout<<"ALMOST";
        else 
        	cout<<"NEITHER";
    
    return 0;
}
