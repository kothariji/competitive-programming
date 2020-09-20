#include <bits/stdc++.h>
using namespace std;

int check(vector <int> *v1, int n,int i, int j)
{
    if(i == n-1) return v1[i][j];    
    return v1[i][j] + max(check(v1,n,i+1,j),check(v1,n,i+1,j+1));
}

int main() { 
    int t;
    cin>>t;
    while(t--)
    {
        int n,data;
        cin>>n;
        vector<int> v1[n];
        for(int i=0; i<n; i++)
            for(int j=0; j<=i; j++)
            {
                cin>>data;
                v1[i].push_back(data);
            }
        cout<<check(v1,n,0,0)<<endl;
    } 
    return 0;
}
