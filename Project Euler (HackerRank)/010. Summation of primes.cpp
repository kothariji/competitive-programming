#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool isprime[1000005];
vector <lli> v1(1000005,0);
void sieve()
{
    isprime[0] = isprime[1] = true;
    for(int i=2; i*i< 1000005; i++)
    {
        if(isprime[i] == false)
        {
            for(int j = i*i; j<1000005; j += i)
                isprime[j] = true;
        }
    } 
    lli sum = 0;
    for(int i=0; i<1000005; i++)
    {
        if(isprime[i] == false)
            sum += i;
        v1[i] = sum;    
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v1[n]<<endl;
    }
    return 0;
}
