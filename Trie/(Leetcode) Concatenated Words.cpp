class Solution {
public:
    class trie
    {
        public:
        struct trie *children[26];
        bool isword;
        trie()
        {
            for(int i=0;i<26;i++)
                children[i] = NULL;
                isword = false;
        }
            
    };
    trie *root = NULL;
    void addintotrie(string s)
    {
        struct trie *temp = root;
        for(int i=0; i<s.size(); i++)
        {
            if(temp->children[s[i]-97] == NULL)
                temp->children[s[i]-97] = new trie;
            temp = temp->children[s[i] - 97];
            
        }
        temp->isword = true;
    }
    bool helper(string s, int start, int count)
    {
        trie *temp = root;
        
        for(int i=start;i<s.size();i++)
        {
            if(temp->children[s[i] - 97] == NULL)
                return false;
            temp = temp->children[s[i] - 97];
            
            if(temp->isword == true)
            {
                if(i==s.size()-1)
                    return count>0;
                 if(helper(s, i+1, count+1))
                     return true;
            }
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
      vector<string> ans;
        root= new trie;
        for(string s:words)
            addintotrie(s);
        
        for(string s:words)
        {
            if(helper(s, 0, 0))
                ans.push_back(s);
        }
        
        return ans;
    }
};