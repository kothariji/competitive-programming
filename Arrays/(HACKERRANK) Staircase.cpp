#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for(int a =0; a<i;a++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
