using namespace std;
#include<iostream>
#include<bits/stdc++.h>
int main()
{
    long long N,i,j,max=0,min=0;
    cin>>N;
    long long *a=new long long[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    sort(a,a+N);
    for(i=0;i<N;i++)
    {
        if(i<N-1)
        {
            min+=a[i];
        }
        if(i>0)
            max+=a[i];
    }
    cout<<min<<" "<<max;
    return 0;

}
