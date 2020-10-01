#include<iostream>
#include<vector>
#include<map>
#include<stack>

#define COMMONMOD 1000000000 + 7

using namespace std;

int main(){
    int n, x, y, ans=0;
    cin>>n;
    map<int, int> arr;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(arr[x]==0 || arr[x]>y)
            arr[x]=y;
    }
    stack<pair<pair<int, int>, int>> s;
    for(auto i : arr){
        while(!s.empty() && s.top().first.second>=i.second){
            ans=max(ans, s.top().first.second*(i.first - s.top().second));
            s.pop();
        }
        if(s.empty())
            x=0;
        else
            x=s.top().first.first;
        s.push(make_pair(i, x));
    }
    x=100000;
    while(!s.empty()){
        ans=max(ans, s.top().first.second*(x-s.top().second));
        s.pop();
    }
    x=0;
    for(auto i : arr){
        ans=max(500*(i.first-x), ans);
        x=i.first;
    }
    ans=max(500*(100000-arr.rbegin()->first), ans);
    cout<<ans<<endl;
    return 0;
}