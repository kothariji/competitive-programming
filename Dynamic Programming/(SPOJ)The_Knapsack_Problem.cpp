#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int 	long long
#define pb 		push_back		
#define ff 		first
#define ss 		second//typedef second ss;
#define unmap  	unordered_map<int,int>
#define	unset	unordered_set<int>
#define maxpq  	priority_queue<int>
#define minpq  	priority_queue<int, vector<int>, greater<int>>
#define foton(i,n) for(int i=0;i<n;i++)
#define	faton(i,a,n)	for(int i=a;i<=n;i++)
#define mod 	1000000007
const int inf = 10000007;
#define endl "\n"
using namespace std;
int size[2001],val[2001];
int t[2002][2002];
int knapsack(int s,int n){
    if(s==0 || n==0) return 0;
    if(t[n][s] != -1) return t[n][s];
    if(size[n-1] <= s){
        return t[n][s] = max((val[n-1]+knapsack(s-size[n-1],n-1)),knapsack(s,n-1));
    }
    else{
        return t[n][s] = knapsack(s,n-1);
    }
}

int32_t main(){
	fastio;
	int s,n;
    cin>>s>>n;

    for(int i=0;i<n;i++){
        cin>>size[i]>>val[i];
    }
    memset(t,-1,sizeof(t));
    
    cout<<knapsack(s,n)<<endl;
	return 0;
}