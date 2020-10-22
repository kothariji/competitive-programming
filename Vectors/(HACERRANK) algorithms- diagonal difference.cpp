#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,i,j,d1=0,d2=0,c;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(i=0;i<n;i++)
    {
           d1+=a[i][i];
    }
    for(i=0;i<n;i++)
    {
        j=(n-1)-i;
        {
            d2+=a[i][j];
        }
    }
    c=abs(d1-d2);
    cout<<c;
}
