#include <bits/stdc++.h>
#define lli long long int
#define MAX 1000001
using namespace std;

bool isprime[MAX];

void sieve()
{
    isprime[0] = isprime[1] = true;
    for(int i=2; i*i <= MAX; i++)
    {
        if(isprime[i] == false)
        {
            for(int j= i*i; j<= MAX; j += i)
                isprime[j] = true;
        }
    }        
}


int main() {
    sieve();
    lli sum = 0;
    int n;
    cin>>n;
    for(int i=11; i<n; i++)
    {
        string s = to_string(i);
        string ls, rs;
        ls = rs = s;
        int flag = 0;
        int l = ls.length();
        int r = rs.length();
        while(l--)
        {
            if(isprime[stoi(ls)])
            {
                flag = 1;
                break;
            }
            ls.erase(0,1);
        }
        if(flag == 1)
            continue;
        while(r--)
        {
            if(isprime[stoi(rs)])
            {
                flag = 1;
                break;
            }
            rs.erase(rs.length()-1);
        }
        if(flag == 1)
            continue;
        else 
            sum += i; 
    }
    cout<<sum;
    return 0;
}
