#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,n; cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   cin>>arr[i];
   int prev=arr[0], cnt=1;
   vector<int>vec;
   
   for(i=1;i<n;i++)
   {
      if(arr[i]>=prev)
      {
          cnt++; prev=arr[i];
      }
      else{
          vec.push_back(cnt);
          cnt=1;
          prev=arr[i];
      }
    
   }
   vec.push_back(cnt);
   int maxi=*max_element(vec.begin(),vec.end());
   cout<<maxi<<endl;
   
    
}

