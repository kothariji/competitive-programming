#include<bits/stdc++.h>
#define lli long long int
using namespace std;

double golden_ratio = ((float)1+sqrt(5))/(float)2;

int ans(int d) 
{
    return ceil((log10(5)/2 + d - 1) / log10(golden_ratio));
}
int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans(n)<<endl;
    }
    return 0;
}
