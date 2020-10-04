/* Dipesh Kumar */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int f =1;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            v.push_back(i);
            }
        }
    for(int i =1; i<v.size(); i++){
        if(v[i]-v[i-1]<6){
            f = 0;
            break;
        }
     }
    if(f==0){
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
    }
    	return 0;
    }
    