// solution for 1556A- https://codeforces.com/contest/1556/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c,d,ans;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        if(c==d)
        {
            if(c==0 && d==0) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else if((c+d)%2!=0)
        cout<<"-1"<<endl;
        else cout<<"2"<<endl;
    }
}