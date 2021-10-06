#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int n,d=0,r=0,a[100000],i,s=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          if(a[i]>=d)
          {
               d=a[i];
               r++;
          }
          else
          {
               if(r>s)
               {
                    s=r;
               }
               r=1;
               d=a[i];
          }
     }
     if(r>s)
     {
          s=r;
     }
     cout<<s;
     return 0;
}