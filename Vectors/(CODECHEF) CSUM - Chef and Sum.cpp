#include <iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	lli t;
	cin>>t;
	while(t--){
	    lli n,k,i,j;
	    cin>>n>>k;
	    int flag = 0;
	    lli a[n];
	    for(i = 0; i<n; cin>>a[i], i++);
	    i = 0;
	    j = n-1;
	    sort(a,a+n);
	    while(i<j){
	        if ((a[i]+a[j])==k){
	            flag = 1;
	            cout<<"Yes"<<"\n";
	            break;
	        }
	        else if((a[i]+a[j])>k){
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    if (!flag){
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}