#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,x,i,j;
   cin>>n>>x;
   int arr[n];
   for(i=0;i<n;i++)
   cin>>arr[i];
   
   int val[x+1];
   val[0]=0;
   for(i=1;i<=x;i++)
   {
      val[i]=INT_MAX;
      for(j=0;j<n;j++)
      {
         if((i-arr[j])>=0 && val[i-arr[j]]!=-1)
         {
            val[i]=min(val[i],val[i-arr[j]]+1);
         }
      }
      if(val[i]==INT_MAX)
      val[i]=-1;
   }
   cout<<val[x];
}