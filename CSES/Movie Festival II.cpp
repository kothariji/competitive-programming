#include <bits/stdc++.h>
using namespace std;
typedef long long int l1;
l1 mod(l1 x){
       return (x>0?x:-x);
}
bool comp(pair<l1,l1> a,pair<l1,l1> b){
       if(a.second<b.second){
              return true;
       }
       else{
              return false;
       }
}
int main() {
       l1 i,n,k;
       cin>>n>>k;
       vector<pair<int,int>>arr;
       for(i=0;i<n;++i){
              l1 t1,t2;
              cin>>t1>>t2;
              arr.push_back(make_pair(t1,t2));
       }
       sort(arr.begin(),arr.end(),comp);
       multiset<l1>s;
       for(i=0;i<k;++i){s.insert(0);}
       l1 total=0;
       multiset<l1>::iterator it;
       for(i=0;i<n;++i){
              it=s.upper_bound(arr[i].first);
              if(it!=s.begin()){
                  --it;
                }
              if(*it<=arr[i].first){
                     ++total;
                     s.erase(it);
                     s.insert(arr[i].second);
              }
       }
       cout<<total<<endl;
	return 0;
}