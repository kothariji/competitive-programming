#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
  int n, k;
  cin>>n>>k;
  int x[n];
  for(int i=0; i<n; ++i)
    cin>>x[i];
  ll lb=*max_element(x, x+n), rb=1e18;
  while(lb<rb){
    ll mb=(lb+rb)/2;
    int c=0;
    ll sum=0;
    for(int i=0; i<n; ++i){
      if(sum+x[i]>mb){
	++c;
	sum=0;
      }
      sum+=x[i];
    }
    if(c>=k)
      lb=mb+1;
    else
      rb=mb;
  }
  cout<<lb;
}