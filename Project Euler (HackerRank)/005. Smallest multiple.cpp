#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t; 
    cin>>t;
    int primes[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; 
    while(t--)
    {
        int n;
        cin>>n;
        lli answer = 1;
        for(int i=0; i<12; i++)
        {
            int ans = 1;
            while(ans <= n)
                ans *= primes[i];
            ans /= primes[i];
            answer *= ans;     
        }
        cout<<answer<<endl;
    }
    return 0;
}
