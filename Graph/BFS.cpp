#include<bits/stdc++.h>
using namespace std;

void printdata(vector<int> grph[],int v){
    for(int i=0;i<v;i++){
        cout<<i;
        for(int p:grph[i]){
            cout<<"->"<<p;
        }
        cout<<endl;
    }
}

void addata( vector<int> grph[],int a, int b){
        grph[a].push_back(b);
        grph[b].push_back(a);   
}
void BFS(vector<int> grph[],bool visited[],int s){
   visited[s]=true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int k=q.front();
        cout<<q.front()<<" ";
        for(int p:grph[k]){
            if(visited[p]==false){
                visited[p]=true;
                q.push(p);
            }
        }
        q.pop();
    }
}
void BFSdistinct(vector<int> grph[],int v){
        bool visited[v];
        int cnt=0;
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        for(int i=0;i<v;i++){
            if(visited[i]==false){
                BFS(grph,visited,i);
                cnt++;
            }
        }
        cout<<endl;
        cout<<cnt<<endl;
}
int main(){
    int v,e,a,b;
    cout<<"Enter the number of vertices of in undirected graphs"<<endl;
    cin>>v;
    vector<int> grph[v];
    cout<<"Enter the number of edges in graph"<<endl;
    cin>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        addata(grph,a,b);
    }
    printdata(grph,v);
    BFSdistinct(grph,v);
}
