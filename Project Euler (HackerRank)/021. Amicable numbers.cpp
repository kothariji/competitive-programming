#include <bits/stdc++.h>
#define lli long long int
#define MAX 100001
using namespace std;

lli a[MAX];

void sieve()
{
    a[0] = a[1] = 0;
    for(int i =2; i< MAX; i++)
    {
        lli sum = 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                sum += j;
                if(j*j != i)
                    sum += i/j;
            }
                
        }
        a[i] = sum;
    }
}

int main() {
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli ans  =0;
        for(int i=2; i<n; i++)
        {
            if(a[i] < MAX)
            {
                if(i == a[a[i]] && (i != a[i]))
                {
                    ans += i;   
                }
            }
            
                
        }
        cout<<ans<<endl;
    }
    return 0;
}
