class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        for(int i = 0 ; i < strs[0].size() ; i++){
            char c = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++){
                if(i == strs[j].size() || strs[j][i] != c)
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};