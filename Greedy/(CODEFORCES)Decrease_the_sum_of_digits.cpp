#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <stack>
#include <cstdio>







int main() {
    int t;
    cin>>t;
    while(t--){
    vector<int> a;
    string s;
    cin>>s;
    int ss;
    cin>>ss;
    int n=size(s);
    for(int i=0;i<n;i++){
        a.push_back(s[i]-'0');
    }
    int psum=0;
    int pri=0;
    for(int i=0;i<n;i++){
        psum+=a[i];
        pri=i;
        if(psum>=ss){break;}
    }

    if(pri>=n-1&&psum<=ss)cout<<0<<endl;
    else if(pri==n-1&&psum==ss){cout<<0<<endl;

    }
    else{
        bool su=false;
        if(psum==ss){
            int w=pri+1;
            while(a[w]==0&&w<n)w++;
            if(w==n){
                su=true;
                cout<<0<<endl;
            }
        }
        if(!su){
        int u=n-1;
        while(a[u]==0)u--;

        while(a[pri]==9)pri++;
    for(int i=pri;i<u;i++)cout<<9-a[i];
    cout<<10-a[u];
    for(int i=0;i<n-u-1;i++)cout<<0;
    cout<<endl;
    }
    }

    }

}
