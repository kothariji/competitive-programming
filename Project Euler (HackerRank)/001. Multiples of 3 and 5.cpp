#include <bits/stdc++.h>
#define lli long long int 
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        lli n, sum = 0,num=0,i=0; 
        cin>>n;
        n--;
        lli n3 = n/3; 
        lli n5 = n/5;
        lli n15 = n/15;
        lli sum3 = ((n3)*(n3+1))/2;
        lli sum5 = ((n5)*(n5+1))/2;
        lli sum15 = ((n15)*(n15+1))/2;
        lli ans3 = 3*sum3;
        lli ans5 = 5*sum5;
        lli ans15 = 15*sum15;
        cout<<ans3+ans5-ans15<<endl;  
    } 
    return 0;
}
