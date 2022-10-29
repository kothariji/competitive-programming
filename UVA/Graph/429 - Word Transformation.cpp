#include<bits/stdc++.h>
using namespace std;

map<string,vector<string>>word;
vector<string>sz[222];
map<string,bool>visited;
map<string,int>lvl;

bool match(string s,string ss,int ln)
{
    int cnt=0;
    for(int i=0;i<ln;i++)
    {
        if(s[i]!=ss[i])cnt++;
        if(cnt>1)break;
    }
    if(cnt==1)return 1;
    else return 0;
}

void node_s(string s,int ln)
{
    for(string n:sz[ln])
    {
        if(match(s,n,ln))
        {
            word[s].push_back(n);
            word[n].push_back(s);
        }
    }
}

void print()
{
    for(auto i=word.begin();i!=word.end();i++)
    {
        cout<<i->first<<" : ";
        vector<string>v=i->second;
        for(string s:v)cout<<s<<' ';
        cout<<endl;
    }
}
void clr()
{
    //visited.clear();
    word.clear();
    for(int i=0;i<220;i++)sz[i].clear();
}

int bfs(string s,string d)
{
    queue<string>q;
    vector<string>trv;
    string node;
    q.push(s);
    lvl[s]=0;
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        visited[node]=1;
        trv=word[node];
        for(string nd:trv)
        {
            if(visited[nd]==0)
            {
                q.push(nd);
                lvl[nd]=lvl[node]+1;
               // cout<<"root= "<<node<<" rlvl= "<<lvl[node]<<" child= "<<nd<<" clvl= "<<lvl[nd]<<endl;
                if(nd==d)
                {
                    return lvl[nd];
                }
            }
        }
    }
    return 0;
}

int main()
{
    int t,ln;
    string s,d,q;
    cin>>t;
    while(t--)
    {

        clr();
        while(cin>>s && s != "*")
        {
            ln=s.size();
            node_s(s,ln);
            sz[ln].push_back(s);
        }
        //print();
        getchar();
        while(getline(cin,q))
        {
            ln=q.size();
            if(ln==0)break;

            s.clear();
            d.clear();
            int l;
            for(l=0;l<ln;l++)
             {
                 if(q[l]==' ')break;
                 s+=q[l];
             }
             for(l=l+1;l<ln;l++)
             {
                 //if(q[l]==' ')break;
                 d+=q[l];
             }
             //cout<<s<<' '<<d<<endl;
            visited.clear();
            cout<<s<<' '<<d<<' '<<bfs(s,d)<<endl;
        }
        if(t>0)
        cout<<"\n";
    }
    return 0;
}
