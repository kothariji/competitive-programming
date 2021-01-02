#include <iostream>
#include <bits/stdc++.h>
#include<array>
 
 
using namespace std;
int main() {
  int n=0;
  cin>>n;
  int aux=0;
  long long cont=0 ; 
  for(int i = 0  ; i < n; i++){
      int x;
      cin>>x;
      aux = max(x,aux);
      cont += aux-x;
  }
 
  
  cout<<cont;
 
  return 0;
}