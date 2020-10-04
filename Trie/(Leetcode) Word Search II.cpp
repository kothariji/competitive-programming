class Solution {
public:
    struct tryNode{
        
        struct tryNode *arr[26];
        bool leaf;
    };
    tryNode *getNode()
    {
        tryNode *t = new tryNode;
        t->leaf=false;
        for(int i=0;i<26;i++)
            t->arr[i] = NULL;
        return t;
    }
    bool isSafe(int i, int j, vector<vector<bool>> &visited) 
{ 
    return (i >=0 && i < visited.size() && j >=0 && 
            j < visited[0].size() && !visited[i][j]); 
} 
    void insert(struct tryNode *root, string s)
    {
        tryNode *temp = root;
        for(int i=0;i<s.size();i++)
        {
           int index = s[i]-97;
            if(temp->arr[index] ==NULL)
                temp->arr[index] = getNode();
            temp = temp->arr[index];
        }
        temp->leaf = true;
    }
 
 //search word start   
    void searchWord(tryNode *root, vector<vector<char>> &boggle, int i, 
                int j,  vector<vector<bool>> &visited, string str,vector<string> &ans) 
{ 
   
    if (root->leaf == true)
    {   if( ! (find(ans.begin(),ans.end(),str)!=ans.end() ))
        ans.push_back(str);
        
    }
       
  
     
    if (isSafe(i, j, visited)) 
    { 
         
        visited[i][j] = true; 
  
        
        for (int K =0; K < 26; K++) 
        { 
            if (root->arr[K] != NULL) 
            { 
                char ch = (char)'a'+(char)K ; 
                
                if (isSafe(i, j+1,visited)  && boggle[i][j+1] == ch) 
                    searchWord(root->arr[K],boggle,i, j+1,visited,str+ch,ans); 
                
                if (isSafe(i+1,j, visited)  && boggle[i+1][j] == ch) 
                    searchWord(root->arr[K],boggle,i+1, j,visited,str+ch,ans); 
                
                if (isSafe(i, j-1,visited)&& boggle[i][j-1] == ch) 
                    searchWord(root->arr[K],boggle,i,j-1,visited,str+ch,ans); 
                
                if (isSafe(i-1, j,visited) && boggle[i-1][j] == ch) 
                    searchWord(root->arr[K],boggle,i-1, j,visited,str+ch,ans); 
            } 
        } 
  
        
        visited[i][j] = false; 
    } 
} 
    
   //search word end 
    
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        vector<string> ans;
        tryNode *root = getNode();
        for(int i=0;i<words.size();i++)
        {
            insert(root, words[i]);
        }
        string s="";
vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int index = board[i][j]-97;
                if(root->arr[index]!=NULL)
                {
                   
                    s=s+board[i][j];
                    searchWord(root->arr[index],board, i, j, visited, s,ans);
                    s="";
                }
            }
        }
       return ans;
    }
};