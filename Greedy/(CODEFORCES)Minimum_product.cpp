#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <stack>
#include <cstdio>







int main() {
    int t;
    cin>>t;
    while(t--){
    long long int a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    if(a-x+b-y<=n)cout<<x*y<<endl;
    else{
       if(a-x<n&&b-y<n){
           cout<<min((a-(n-(b-y)))*y,(b-(n-(a-x)))*x)<<endl;
       }
       else if(a-x>=n&&b-y<n){
           cout<<min((y*(a-(n-(b-y)))),(a-n)*b)<<endl;

       }
       else if(a-x<n&&b-y>=n){
           cout<<min(x*(b-(n-(a-x))),a*(b-n))<<endl;
       }
       else if(a-x>=n&&b-y>=n){
           cout<<min(a*(b-n),b*(a-n))<<endl;
       }
    }

    }

}
