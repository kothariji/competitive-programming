#include <bits/stdc++.h>
#define lli long long int
#define MAX 100001
using namespace std;

lli a[MAX];

vector <lli> v1;

void sieve()
{
    a[0] = a[1] = 0;
    for(lli i =2; i< MAX; i++)
    {
        lli sum = 1;
        for(lli j=2; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                sum += j;
                if(j*j != i)
                    sum += i/j;
            }
                
        }
        a[i] = sum;
        if(a[i] > i)
            v1.push_back(i);
    }
}

int main() {

    sieve();
    lli t,n,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag = 0;
        for(lli i=0; i<v1.size(); i++)
        {
            for(lli j=i; j<v1.size(); j++)
            {
                if((v1[i] + v1[j]) == n)
                {
                    flag = 1;
                    break;
                }
                else if((v1[i] + v1[j]) > n)
                    break;
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}