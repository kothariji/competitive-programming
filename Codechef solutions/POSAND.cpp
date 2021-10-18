#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> special;
        vector<int> notspecial;
        
        if(n==1)
        {cout<<1<<endl;
        continue;}
        
        if(isPowerOfTwo(n))
        cout<<-1<<endl;
        else
        {
         for(int i=1;i<=n;i++)
         {
             if(isPowerOfTwo(i))
             special.push_back(i);
             else
             notspecial.push_back(i);
         }
         
         vector<int> ans;

         int j=0;
         int i=0;
         while(i<special.size())
         {
             ans.push_back(special[i++]);
             
             while(j<notspecial.size())
             {
                if(notspecial[j]<=special[i]+1)
                {
                ans.push_back(notspecial[j]);
                j++;
                }
                else
                break;
             }
             
             
         }
         while(j<notspecial.size())
              {
                ans.push_back(notspecial[j]);
                j++;
                }
                
                swap(ans[0],ans[2]);
                
                for(auto x: ans)
                cout<<x<<" ";
                cout<<endl;
                  
        }
        
        
    }
}
