#include<iostream>
#include<vector>
#define vi vector<int>
#include<bits/stdc++.h>

using namespace std;
int maxD,maxN;
int vis[10001];
vi ar[10001];
void dfs(int n,int d){
    vis[n]=1;
    if(d>maxD)
    {
        maxD=d;
        maxN=n;
    }
    for(int child:ar[n]){
        if(vis[child]==0){
            dfs(child,d+1);
        }
    }
}
int main()
{
    int n,i,a,b;

    n=10;  //number of elements
    ar[0].push_back(1);
    ar[1].push_back(0);  //0---1
    ar[1].push_back(2);
    ar[2].push_back(1);  //1---2
    ar[2].push_back(3);
    ar[3].push_back(2);  //2---3
    ar[2].push_back(9);
    ar[9].push_back(2);  //2---9
    ar[2].push_back(4);
    ar[4].push_back(2);  //4---2
    ar[4].push_back(5);
    ar[5].push_back(4);  //4---5
    ar[1].push_back(6);
    ar[6].push_back(1);  //1---6
    ar[6].push_back(7);
    ar[7].push_back(6);  //6---7
    ar[6].push_back(8);
    ar[8].push_back(6);  //6---8

    maxD=-1;
    dfs(0,0);

    for(i=1;i<=n;i++){
        vis[i]=0;
    }
    maxD=-1;
    a=maxN;
    dfs(maxN,0);
    b=maxN;
    cout<<"Longest path is from "<<a<<" to "<<b<<" of length "<<maxD<<endl;
    return 0;
}
/*
Longest path is from 5 to 7 of length 5
*/
