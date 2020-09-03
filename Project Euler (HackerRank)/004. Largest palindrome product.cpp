#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool ispalin(string s, int i ,int  j)
{
    if(i >= j)
        return true;
    if(s[i] != s[j])
        return false;
    
    return ispalin(s, i+1 , j-1); 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
    while(t--)
    {
        lli n;
        cin>>n;
        lli large= 0;
        lli a,b,del;
        for(a = 999; a > 99; a--)
        {
            if(a % 11 == 0)
            {   
                b = 999;
                del = 1;
            }
            else
            {
                b = 990;
                del = 11;
            }    

            while(b>=a)
            {
                string s = to_string(a*b);
                if (a*b <= large)
                    break;

                if(ispalin(s, 0, s.length()-1))
                    if(a*b < n)
                        large = max(a*b,large);
                    
                b = b-del;
                
            }
                     
            
        }
        cout<<large<<endl;
    }
    return 0;
}
