#include <bits/stdc++.h>
#define lli long long int
using namespace std;



int main() {

    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        cout<<(lli)pow((lli)((n*(lli)(n+1))/(lli)2),2)-(lli)(((n)*(lli)((lli)n+1)*(lli)(((lli)2*n)+(lli)1))/(lli)6)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
