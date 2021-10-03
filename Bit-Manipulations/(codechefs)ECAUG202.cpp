#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n,add=0;
     cin>>n;
     while(n--){
         int temp;
         cin>>temp;
         if(temp%2==0)
         add+=temp;
     }
     cout<<add<<endl;
 }
	return 0;
}

