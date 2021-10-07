
#include<bits/stdc++.h>

using namespace std;

 

vector<int> startTime;

vector<int> endTime;

int timer = 0;

 

void DFS(vector<int> graph[], int start, vector<bool> &vis){

    vis[start] = true;

    startTime[start] = timer++;

    for(auto node : graph[start]){

        if(!vis[node])

            DFS(graph, node, vis);

    }

    endTime[start] = timer++;

}

 

bool check(int x, int y){

    if(startTime[x] > startTime[y] && endTime[x] < endTime[y])

        return true;

    return false;

}

 

int main(){

    int N;

    cin >> N;

 

    vector<int> graph[N+1];

    startTime.resize(N+1);

    endTime.resize(N+1);

    

    for(int i=1; i<=N-1; i++){

        int a, b;

        scanf("%d %d", &a, &b);

        graph[a].push_back(b);

    }

    

    vector<bool> vis(N+1);

    DFS(graph, 1, vis);

            

    int Queries;

    cin >> Queries;

    while(Queries--){

        int type, x, y;

        scanf("%d %d %d", &type, &x, &y);

        

        if(!check(x, y) && !check(y, x)){

            printf("NO\n");

            continue;

        }

 

        if(type == 0){

            if(check(y, x))

                printf("YES\n");

            else

                printf("NO\n");

        }

        else{

            if(check(x, y))

                printf("YES\n");

            else

                printf("NO\n");

        }

    }

    return 0;

}
