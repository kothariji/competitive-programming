// A directed graph is strongly connected if 
// there is a path between all pairs of vertices. 
// A strongly connected component (SCC) of a directed graph 
// is a maximal strongly connected subgraph.
#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
     int V;
     list<int> *adj;
     Graph(int V);
     void addEdge(int u,int v);
     void fillFinishtime(int v,bool visited[],stack<int>&Stack);
     void DFSUtil(int v,bool visited[]);
     void printSCCs();
     Graph getTranspose();
};

Graph Graph::getTranspose(){
    Graph trans(V);
    for(int v=0;v<V;v++){
        list<int>::iterator i;
        for(i=adj[v].begin();i!=adj[v].end();++i){
            trans.adj[*i].push_back(v);
        }
    }
    return trans;
}

void Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true; 
    cout << v << " "; 
  
    // Recur for all the vertices adjacent to this vertex 
    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
}


void Graph::fillFinishtime(int v,bool visited[],stack<int>&Stack){
        visited[v] = true;
        list<int> ::iterator it;
        for(it = adj[v].begin();it!=adj[v].end();++it)
            if(!visited[*it])
               fillFinishtime(*it,visited,Stack);
        Stack.push(v);
}

void Graph:: printSCCs(){
    stack<int>Stack;
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
       visited[i] = false;
    //fill vertices in stack accd to their finish times
    for(int i=0;i<V;i++)
        if(!visited[i])
            fillFinishtime(i,visited,Stack);
    //create reversed graph
    // cout<<"stack is \n";
    // cout<<"size of the stack is "<<Stack.size()<<endl;
    // while(!Stack.empty())
    //    {cout<<Stack.top()<<endl;Stack.pop();}
    // cout<<endl;
    Graph reversed = getTranspose();
   // marke all unvisited for 2nd dfs
    for(int i=0;i<V;i++)
        visited[i] = false;
    while(!Stack.empty()){
        int v = Stack.top();
        Stack.pop();
        if(!visited[v]){
            reversed.DFSUtil(v,visited);
            cout<<endl;
        }
    }

}


void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}
Graph::Graph(int v){
    this->V = v;
    adj = new list<int>[V];
}


int main(){
    Graph g(5); g.addEdge(0, 2);
    g.addEdge(1, 0); 
     
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(3, 4); 
  
    cout << "Following are strongly connected components in "
            "given graph \n"; 
    g.printSCCs(); 
  
    return 0;
  
}
