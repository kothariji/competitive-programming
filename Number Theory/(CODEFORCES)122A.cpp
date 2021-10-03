//solution for 122A - https://codeforces.com/problemset/problem/122/A
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;cin>>n;
    int i=0;
    
    while(a[i]<=777)
    {
        if(n%a[i]==0)
        {
            cout<<"YES";
            return 0;
        }
        i++;
    }
    cout<<"NO";
    
    return 0;
}