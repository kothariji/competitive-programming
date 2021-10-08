// Chef has a string S. He also has another string P, called pattern. He wants to find the pattern in S, but that might be impossible. Therefore, he is willing to reorder the characters of S in such a way that P occurs in the resulting string (an anagram of S) as a substring.

// Since this problem was too hard for Chef, he decided to ask you, his genius friend, for help. Can you find the lexicographically smallest anagram of S that contains P as substring?

// Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long t;
  cin>>t;
  while(t--)
  {
      string m,s,ans,v1,v2,y1,y2;
      cin>>m;
      cin>>s; 
    int arr[26] {};
    int n=m.length();
    int q=s.length();

    for(int i=0;i<n;i++)
    { 
      arr[m[i]-'a']++;
      
    }
    for(int i=0;i<q;i++)
    {
        arr[s[i]-'a']--;
        
    }
    
    ans=s;
    
    int k=ans[0]-'a';
    
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
          v1+=(char)(i+'a');
         
        }
        
    }
    for(int i=k;i<26;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
          v2+=(char)(i+'a');
        }
    } 
    
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
          y1+=(char)(i+'a');
        }
    }
    
    for(int i=k+1;i<26;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
          y2+=(char)(i+'a');
        }
    }
     
     string ans1=v1+ans+v2;
     string ans2=y1+ans+y2;

     cout<<(ans2<ans1?ans2:ans1)<<'\n';
  
}
    return 0;
}