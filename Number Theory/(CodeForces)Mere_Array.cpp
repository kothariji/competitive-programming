#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>



int main(){

int t;
cin>>t;
for(int tt=0;tt<t;tt++){
 int n;
 cin>>n;
 vector<long long int> a(n);
 for(int i=0;i<n;i++)cin>>a[i];
 vector<long long int> b=a;
 sort(b.begin(),b.end());
 vector<long long int> w;
 for(int i=0;i<n;i++){
     if(a[i]!=b[i])w.push_back(a[i]);
 }
 int y=w.size();
 int m=b[0];
 bool broke=false;
 for(int i=0;i<y;i++){
     if(w[i]%m!=0){
         broke=true;
         break;
     }
 }
 if(broke)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
}
}
