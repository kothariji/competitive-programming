#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;
#define ar array
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

signed main(){
  int n ;  cin >> n ;
  oset<ar<int,2>>b,c;
  vector<ar<int,3>>a(n) ;
  vector<int>A(n),B(n)  ;
  for(int i=0;i<n;i++)
    cin >> a[i][0] >> a[i][1],a[i][2]=i ;
    
  sort(a.begin(),a.end(),[&](const ar<int,3> i,const ar<int,3>j){
    return ((i[0]<j[0])||(i[0]==j[0]&&i[1]>j[1])) ;
  }) ;
  
  for(int i=0,j=n-1;i<n;i++,j--){
    A[a[i][2]]=i-b.order_of_key({a[i][1],-1}) ;
    B[a[j][2]]=c.order_of_key({a[j][1]+1,-1}) ;
    b.insert({a[i][1],i}) ;c.insert({a[j][1],i}) ;
  }
  for(int i=0;i<n;i++){
      cout << B[i] <<' ' ;
  }
  cout << '\n' ;

  for(int i=0;i<n;i++){
      cout <<  A[i]<< ' ' ;
    }
}