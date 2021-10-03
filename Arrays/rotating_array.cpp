// rotate an array
/* logic: first reverse the elements till the no. of rotations 
          then reverse the remaining elements after no. of rotations
          then reverse the whole array
    example: arr[]={5,8,10,12,15}  d=2(no. of rotations)
             rotated array={10,12,15,5,8}
           1. revrse elements till index (d-1)  {8,5,10,12,15}
           2. revesre elements from index d     {8,5,15,12,10}
           3. reverse the whole array           {10,12,15,5,8}
           */

#include<bits/stdc++.h>
using namespace std;

void rev(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int d;
    cin>>d;
    rev(a,0,d-1);
    rev(a,d,n-1);
    rev(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}