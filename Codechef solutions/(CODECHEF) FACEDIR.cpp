#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    const char *S[4]={"North","East","South","West"};
    cin>>t;
    while(t--)
    {
        cin>>x;
        int i=0;
        while(x--)
        {
            i++;
            if(i==4) i=0; 
        }
        cout<<S[i]<<endl;
    }
}