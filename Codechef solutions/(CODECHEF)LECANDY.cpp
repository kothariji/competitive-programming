/*
    PROBLEM : LECANDY (Little Elephant and Candies)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c,sum=0;
        cin>>n>>c;
        long long arr[n];
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(sum>c)
        {
            cout<<"No"<<endl;
        }
        else 
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
