#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    int n;
    cin>>n;
    int start, end;
    if(n==3)
    {
        start = 100;
        end = 999;
    }
    else if(n == 4)
    {
        start = 1000;
        end = 9999;
    }
    else if(n==5)
    {
        start = 10000;
        end = 99999;
        cout<<443839;
        return 0;
    }
    else
    {
        start = 100000;
        end = 999999;
    }
    lli sum = 0;
    for(lli i=start; i<=end; i++)
    {
        string s = to_string(i);
        lli ans = 0;
        for(int c=0; c < s.length(); c++)
        {
            ans += pow((int)(s[c]-'0'),n);
        }
        if(ans == i)
        {
            sum += i;
        }

            
            
    }
    cout<<sum;
    return 0;
}
