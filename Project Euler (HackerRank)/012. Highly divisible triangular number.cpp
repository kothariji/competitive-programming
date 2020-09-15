#include <bits/stdc++.h>
using namespace std;
unordered_map <long long int, long long int> mp1;
long long int D(long long int n)
{   
    long long int res = 1;
    for(long long int i=2; i*i <= n; i++)
    {
        long long int count = 1;
        while(n%i == 0)
        {
            count++;
            n /= i;
        }
        res *= (count);
    }
    if(n > 1)
        res *= 2;
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int val =1;
        long long int count = 1;
        while(1)
        {
            if(mp1.find(val) == mp1.end())
            {
                long long int mpans = D(val);
                mp1[val] = mpans; 
            }
            if(mp1[val] > n)
            {
                cout<<val<<endl;
                break;
            }
            count++;
            val = val + count;
        }
    }
    return 0;
}
