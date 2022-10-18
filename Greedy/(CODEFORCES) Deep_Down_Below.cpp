#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
 
signed main(){
    fast;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,int>> power;
        for(int i=0;i<n;i++){
            int k; cin>>k;
            vector<int> v(k);
            int p=0,maxm=0;
            for(int j=0;j<k;j++){
                cin>>v[j];
                if(v[j]-j>maxm){
                    maxm=v[j]-j;
                }
            }
            power.push_back(make_pair(maxm,k));
        }
        sort(power.begin(),power.end());
        int l=0;
        vector<int> final(n);
        int minp=power[0].first;
        for(int i=0;i<power.size();i++){
            final[i]=power[i].first - l;
            l+=power[i].second;
            if(minp<final[i]) minp=final[i];
        }
        cout<<minp+1<<"\n";
    }
    return 0;
}