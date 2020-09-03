#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

lli pf(lli n)
{
    priority_queue <lli> pq;
    for(lli i=2; i*i<=n;i++)
    {
        if(n%i==0)
        {
            pq.push(i);
            while(n%i ==0)
                n /= i;
        }
    }
    if(n > 1)
        return n;
        else
        return pq.top();
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        cout<<pf(n)<<endl;
    }
    return 0;
}
