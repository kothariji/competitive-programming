class Solution {
public:
    
    bool isSubSeq(string &s, string &t) {
        int j = 0;
        for(char c:s) {
            if(c >= 'A' && c <= 'Z' && c != t[j]) return false;
            if(c == t[j]) j++;
        }
        return j == t.size();
    }
    
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        
        for(auto &q: queries) {
            ans.push_back(isSubSeq(q, pattern));
        }
        
        return ans;
    }
};