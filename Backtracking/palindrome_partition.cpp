//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool palin(string s,int i,int j)
  {
      while(i<=j)
      {
          if(s[i++]!=s[j--])
          return false;
      }
      return true;
  }
  void solve(vector<vector<string>>&ans,vector<string>v,int i,string s)
  {
      if(i==s.length())
      {
          ans.push_back(v);
          return;
      }
      int j,n=s.length();
      for(j=i;j<n;j++)
      {
          if(palin(s,i,j)==true)
          {
              v.push_back(s.substr(i,j-i+1));
              solve(ans,v,j+1,s);
              v.pop_back();
          }
      }
  }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<vector<string>>ans;
        vector<string>v;
        solve(ans,v,0,s);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends
