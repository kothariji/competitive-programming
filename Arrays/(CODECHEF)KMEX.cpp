#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{ 
   ll n;
   cin>>n;
   unordered_map<string,ll> m;
   ll mx=0;
   string w;
   while(n--){
     string s;
     cin>>s;
     m[s]++;  
   }
   for(auto v:m){
     if(v.second>mx){
      mx=v.second;
      w=v.first;
     }
     //cout<<v.first<<" "<<v.second<<"\n";
   }
   cout<<w;
}