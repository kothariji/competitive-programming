#include<bits/stdc++.h>
using namespace std;
 
int main(){
     long long int a,b,n,c,d;
     cin>>n;
     if(n>=0)
     {
          cout<<n;
     }
     else
     {
          a=n%10;
          b=n/10;
          c=b%10;
          b-=c;
          b+=a;
          d=n/10;
          if(d>b)
          {
               cout<<d;
          }
          else
          {
               cout<<b;
          }
     }
     return 0;
}