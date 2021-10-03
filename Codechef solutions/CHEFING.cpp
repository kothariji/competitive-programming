//link:https://www.codechef.com/FEB19B/problems/CHEFING/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 while(t)
 {   int cnt=0;
     cin>>n;
     int a[26]={0};
     bool f[26];
     memset(f,false,sizeof(f));
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         int l=s.length();
         for(int j=0;j<l;j++)
         {  //cout<<int(s[j])<<" ";
           if(f[int(s[j])-97]==0)
           {
               a[int(s[j])-97]++;
               f[int(s[j])-97]=true;

           }
         }
          memset(f,false,sizeof(f));
     }
     for(int i=0;i<26;i++)
     {
         if(a[i]==n)
            cnt++;
     }
     cout<<cnt<<endl;
     t--;
 }
}
