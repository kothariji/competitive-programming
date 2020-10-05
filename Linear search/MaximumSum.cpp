 using namespace std;
 #include<iostream>
 #include<bits/stdc++.h>
 int main()
 {
     long long N,i,j,sum=0,count=0;
     cin>>N;
     long long *arr=new long long[N];
     for(i=0;i<N;i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+N);
     if(arr[N-1]<0)
     {
         cout<<arr[N-1]<<" "<<"1";
         return 0;
     }
     else
     {
         for(i=0;i<N;i++)
         {
             if(arr[i]>=0)
             {
                 sum+=arr[i];
                 count++;
             }
         }
         cout<<sum<<" "<<count;
     }
     return 0;
 }
