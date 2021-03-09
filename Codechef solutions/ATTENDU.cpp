#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        string b;
        cin>>b;
        int leaves=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]=='0')
                leaves++;
        }
        if(leaves>30)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
    }
}