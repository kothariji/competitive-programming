/**
 * A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. 
 * There are various applications of this data structure, such as autocomplete and spellchecker
 *
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

class Trie {
public:
    struct TrieNode
    {
        TrieNode* child[26];
        bool isEnd;
        TrieNode()
        {
            isEnd = false;
            for(int i = 0; i < 26; i++)
                child[i] = NULL;
        }
    };
    
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if(curr->child[index] == NULL)
                curr->child[index] = new TrieNode();
            curr = curr->child[index];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if(curr->child[index] == NULL)
                return false;
            curr = curr->child[index];
        }
        return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i = 0; i < prefix.length(); i++)
        {
            int index = prefix[i] - 'a';
            if(curr->child[index] == NULL)
                return false;
            curr = curr->child[index];
        }
        return true;
    }
};