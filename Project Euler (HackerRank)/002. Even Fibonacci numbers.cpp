#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        lli n,sum=2,prev = 0,num=2,newnum;
        cin>>n;
        while(1)
        {
            newnum = (num*4) + prev;
            prev = num;
            num = newnum;
            if(num <= n)
                sum += num;
            else
                break;    
        }
    cout<<sum<<endl;
    }
    return 0;
}
