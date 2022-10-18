#include <iostream>
using namespace std;
int  main()
{
    int n,k,q;
    cin>>n;
    cin>>k;
    cin>>q;
    int pos = k%n;
    int a[n],queries[q];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<q;i++)
      {
        int temp;
        cin>>temp;
        if(temp-pos>=0)
            cout<<a[temp-pos]<<"\n"; 
        else 
            cout<<a[temp-pos + n]<<"\n";
      }
    return 0;
}
