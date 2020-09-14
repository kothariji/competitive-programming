#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    int c;
    while(t--)
    {
        int n;
        cin>>n;
        int flag = 0;
        lli maxi = INT_MIN; 
        for(lli i=1; i<=n/3; i++)
        {
            int j = ((n*n)-(2*i*n))/((2*n) - (2*i));
            c = n - i - j; 
            if(c < 0)
                break;
            if(((i*i) + (j*j)) == (c*c))
            {
                maxi = max(maxi, (i*j*c));
                flag = 1;
            }
            
        }
        if(flag == 1)
            cout<<maxi<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
