/*
    Author: -akash
*/

#include<bits/stdc++.h>
int a[1000000];
int pp[1000000];
using namespace std;
 
 
void fun()
{
    int n=1000000,i,j;
    for(i=1;i<=n;i++)
    a[i]=1;
    a[0]=a[1]=0;
    for(i=2;i*i<=n;i++)
    {
        if(a[i])
        {
            for(j=i*i;j<n;j+=i)
            a[j]=0;
        }
    }
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(a[i])
        c++;
 
        if(a[c]==1)
        pp[i]=1;
        else
        pp[i]=0;
    }
    for(i=1;i<=n;i++)
    pp[i]+=pp[i-1];
}
int main()
{
    fun();
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pp[r]-pp[l-1]<<endl;
    }
}