class Solution {
public:
    int lengthOfLastWord(string s) {
       int ans=0;
       for(int i=s.size()-1;i>=0;i--)
       {
           if(s[i]==32 && ans>0)
               return ans;
           if(s[i]!=32)
               ans++;
       }
        return ans;

    }
};
