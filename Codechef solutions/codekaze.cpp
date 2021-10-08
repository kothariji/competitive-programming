/*------------------Honey, you should see me in a crown--------------------*/
#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;

/*------------Every fairy tale needs a good old-fashioned villain----------------*/

int main()
{
FAST;
CC{
    lli(n);
    //cout<< pow(2,(int)log2(n) )<<" power\n";
    long long comp = pow(2,(long long)log2(n));
    comp=n+1-comp;
    cout<<comp<<' '<<n<<' '<<(comp&n)<<"\n";
    if((comp&n)!=0)
        cout<<"Anjali\n";
    else
        cout<<"Vaibhavi\n";
}
return 0;
}
