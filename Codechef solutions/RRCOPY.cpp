#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            um[a]++;
        }
        cout<<um.size()<<'\n';
        
    }
    return 0;
}
