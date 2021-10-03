#include<iostream>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n,k,a,sum=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>a;
            sum=sum+a;
        }
        if(sum%k==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
    }
}