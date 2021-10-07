//Ada and crayons 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        
        int zero=0;
        int one=0;
        if(str[0]=='U')
        zero++;
        else
        one++;
        
        char prev=str[0];
        for(int i=1;i<str.length();i++)
        {
         if(str[i]=='U' and str[i]!=prev)   
         {
             zero++;
         }
          if(str[i]=='D' and str[i]!=prev)   
         {
             one++;
         }
         prev=str[i];
        }
        cout<<min(zero,one)<<endl;
        
    }
}
