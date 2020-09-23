#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int t ;
   cin>>t;
    long arr[9][100001];
     for(int k =0;k<9;k++)
    arr[k][0]=1;
    for(int j=1;j<100001;j++)
    arr[0][j]=0;

     int x[8] = {1,2,5,10,20,50,100,200};
    
   
   
    for(int i =1;i<9;i++)
    {
        for(int j=1;j<100001;j++)
        {
            if(j<x[i-1])
            arr[i][j] = arr[i-1][j];
            else {
            arr[i][j] = (arr[i-1][j]%mod+arr[i][j-x[i-1]]%mod)%mod;
            }
           

        }
    }

   while(t--)
   {
       int n ;
       cin>>n;
        
   
    cout<<arr[8][n]<<endl;
   }

    return 0;
}
