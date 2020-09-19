#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,y;
    int i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-2;i++)
    {
        x=y=0;
        for(j=i+2;j<n;j++)
        {
            if((a[j]>a[i]&&a[j]>a[i+1])||(a[j]<a[i]&&a[j]<a[i+1]))
                x++;
            else
                y++;
        }
        if(x&&y)
        {
            cout<<"yes";
            return 0;
        }
    }
cout<<"no";
return 0;
}