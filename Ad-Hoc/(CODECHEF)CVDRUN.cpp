#include<bits/stdc++.h>
using namespace std;


int main() {
	short int t;
	cin>>t;
	while(t--){
	    int n,x,y,k;
	    cin>>n>>k>>x>>y;
	    unordered_set<int> A;
	    do{
            A.insert(x);
            x=(x+k)%n;
        }while(A.count(x)==0);
        if(A.count(y)!=0)cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
 // A codechef question demonstrating use of unordered list
