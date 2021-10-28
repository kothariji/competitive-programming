
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n,p,x,y,time=0;
        cin>>n>>p>>x>>y;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<p; i++)
        {
            if(arr[i]==0)
            {
                time=time+x;
            }
            else if(arr[i]==1)
            {
                time=time+y;
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
