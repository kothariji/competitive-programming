#include<bits/stdc++.h>
using namespace std;
static stack<int> s;
void addata(vector<int> grph[],int a, int b){
        grph[a].push_back(b);
}

void DFS(bool visited[],vector<int> grph[],int i){
    visited[i]=true;
    for(int p:grph[i]){
        if(visited[p]==false){
            DFS(visited,grph,p);
        }
    }
    s.push(i);
}
void topological_sort(vector<int>grph[],int v){
        bool visited[v];
        int i;
        for(i=0;i<v;i++){
            visited[i]=false;
        }
        for(i=0;i<v;i++){
            if(visited[i]==0){
                DFS(visited,grph,i);
            }
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
}
int main(){
    int v,e,a,b;
    cout<<"Enter the number of vertices of in directed graphs"<<endl;
    cin>>v;
    vector<int> grph[v];
    cout<<"Enter the number of edges in graph"<<endl;
    cin>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        addata(grph,a,b);
    }
    topological_sort(grph,v);
}
