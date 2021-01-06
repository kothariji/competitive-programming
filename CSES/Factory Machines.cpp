#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n , t ;
    cin>>n>>t;
    long long a[n] ;
    for(long int i=0 ; i<n  ; i++) cin>>a[i] ;
    long long l=1 , m , h=1e18 , ans,sum ;
    while (l<=h)
    {
        sum=0 ;
        m = (l+h)/2;
        for( int i=0 ; i<n ; i++)
        {
            sum+=(m/a[i]);
            if(sum>=t)
                break ;
            
        }
        if(sum>=t)
        {
            h=m-1 ;
            ans=m;
        }
        else
            l=m+1 ; 
    }
    cout<<ans<<"\n" ;
}