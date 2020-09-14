#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        lli mul = 1, mulmax = INT_MIN;
        for(int i=0; i<k; i++)
            mul *= (int)(s[i]-'0');
        
        if(mulmax < mul)
            mulmax = mul;

        for(int i = 1; i< n-k+1; i++)
        {
            if((int)(s[i-1]-'0') != 0)
                mul /= (int)(s[i-1]-'0');
            else
            {
                mul = 1;
                for(int j=i; j<i+k-1; j++)
                    mul *= (int)(s[j]-'0');
                
            }    
            mul *= (int)(s[i+k-1]-'0');
            if(mulmax < mul)
                mulmax = mul;
        }
    cout<<mulmax<<endl;
    }   
    return 0;
}
