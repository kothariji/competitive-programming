vector<unsigned long long> roll;

class Solution {
public:
    bool match(string s, int n, int sz, string &ans){
        unordered_map<unsigned long long, vector<int>> mp;
        unsigned long long hash = 0;
        for(int i = 0; i < sz; i++)
            hash = (hash*31 + (s[i] - 'a'));
        
        mp[hash].push_back(0);
        
        for(int i = sz; i < n; i++){
            hash = (hash - roll[sz - 1]*(s[i - sz] - 'a'));
            hash = (hash*31 + (s[i] - 'a'));
            
            if(mp.count(hash)){
                for(int v : mp[hash]){
                    string t = s.substr(v, sz), c = s.substr(i - sz + 1, sz);
                    if(t.compare(c) == 0){
                        ans = t;
                        return true;
                    }
                }
            }
            mp[hash].push_back(i - sz + 1);
        }
        
        return false;
    }
    string longestDupSubstring(string s) {
        int n = s.length();
        if(n == 0) return "";
        
        roll.resize(n);
        roll[0] = 1;
        for(int i = 1; i < n; i++)
            roll[i] = (31*roll[i-1]);
        
        string ans = "", temp;
        int l = 1, h = n, mid;
        bool flag = false;
        
        while(l <= h){
            temp = "";
            mid = l + (h-l)/2;
            flag = match(s, n, mid, temp);
            if(flag){
                if(ans.size() < temp.size())
                    ans = temp;
                l = mid+1;
            }else h = mid - 1;
        }
        
        return ans;
    }
};