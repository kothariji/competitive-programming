#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Trie
{
    public:
    vector<Trie*> x;
    Trie():x(26){}
    string word;
};
Trie *root;
void addWord(string word) 
{
    Trie *temp=root;
    for(int i=0;i<word.size();i++)
    {
        if(temp->x[word[i]-'a']==NULL)
            temp->x[word[i]-'a']= new Trie;
        temp=temp->x[word[i]-'a'];
        if(i+1==word.size())
            temp->word=word;
    }
}
void searchtrie(string word,Trie* temp,bool &v,int start)
{
    if(temp->word.size()==word.size())
        v=true;
    else
    {
        for(int i=start;i<word.size()&&v==false;i++)
        {
            if(word[i]=='.')
            {
                for(int j=0;j<26&&v==false;j++)
                    if(temp->x[j]!=NULL)
                        searchtrie(word,temp->x[j],v,i+1);
            }
            else
            {
                if(temp->x[word[i]-'a']!=NULL)
                {
                    temp=temp->x[word[i]-'a'];
                    if(temp->word.size()==word.size())
                        v=true;
                }
                else
                    break;
            }
        }
    }
}
bool search(string word) 
{
    bool v=false;
    Trie *temp=root;
    searchtrie(word,temp,v,0);
    return v;   
}
int main()
{
    root=new Trie;
    int present;
    vector<string> words={"Hello","World","C++Program"};      //Sample Input
    vector<string> find={"World","Program"};
    for(int i=0;i<words.size();i++)
        addWord(words[i]);
    for(int i=0;i<find.size();i++)
    {
        present=search(find[i]);
        if(!present)
            printf("Word not Found :(\n");
        else
            printf("Found the Word :)\n");
    }
    return 0;
}