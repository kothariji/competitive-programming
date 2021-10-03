class Solution {
public:
    unordered_map<string,bool> mp;
    bool helper(string s1,  string s2)
    {
        if(s1.compare(s2)==0)
            return true;
        if(s1.size()<=1)
            return false;
        string temp = s1+"|"+s2;
        if(mp.find(temp) !=mp.end())
            return mp[temp];
       bool flag = false;
        int n = s1.size();
        for(int k=1; k<n; k++)
        {
           bool x = helper(s1.substr(0, k), s2.substr(n-k, k)) && helper(s1.substr(k,n-k),
                                                                        s2.substr(0,n-k));
        bool y = helper(s1.substr(0,k), s2.substr(0,k)) && helper(s1.substr(k,n-k), s2.substr(k,n-k));
            if(x || y)
               {
            flag = true;
            break;
            }
        }
        return mp[temp] = flag;
    }
    bool isScramble(string s1, string s2) {
        if(s1.size() != s2.size())
            return false;
        if(s1.size()==0 && s2.size()==0)
            return true;
        mp.clear();
        return helper(s1, s2);
    }
};