#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;

    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    long long int cs=arr[0],ms=arr[0];

    for(i=1;i<n;i++)
    {
        cs=max(cs+arr[i],arr[i]);
        ms=max(ms,cs);
    }

    cout<< ms <<endl;

 return 0;   
}
