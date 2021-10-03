class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> words(wordList.begin(),wordList.end());
        if(words.find(endWord)==words.end()){
            return 0;
        }
        queue<string> q;
        q.push(beginWord);
        int r{0};
        while(!q.empty()){
            int c=q.size();
            while(c--){
                string w=q.front();
                q.pop();
                
                if(!w.compare(endWord)){
                    return r+1;
                }
                
                string x=w;
                for(unsigned int i=0;i<w.size();i++){
                    for(char j='a';j<='z';j++){
                        x[i]=j;
                        if(!w.compare(x)){
                            continue;
                        }
                        if(words.find(x)!=words.end()){
                            q.push(x);
                            words.erase(x);
                        }
                    }
                    x=w;
                    
                }
            }
            r++;
        }
        return 0;
    }
}
