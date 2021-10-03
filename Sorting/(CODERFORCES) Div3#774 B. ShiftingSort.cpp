//https://codeforces.com/contest/1579/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9 + 7
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
 
    vector<pair<int,int>> actions;
 
    for(int i = 0; i<n; i++){
        int minPos = i;
        for(int j = i; j<n; j++){
            if(a[j] < a[minPos])
                minPos = j;
        }
 
        if(minPos > i){
            actions.push_back({i,minPos});
            int bak = a[minPos];
            for(int j = minPos; j>i; j--){
                a[j] = a[j-1];
            }
            a[i] = bak;
        }
    }
 
    cout<<actions.size()<<endl;
 
    for(auto x : actions){
        cout<<x.first + 1<<" "<<x.second + 1<<" "<<x.second - x.first<<endl;
    }
}
 
int main(){
 
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
 
    return 0;
}