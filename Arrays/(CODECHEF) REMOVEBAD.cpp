// Remove Bad Elements from starters 58
// Solved using array
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,max=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int temp=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==arr[i+1])
	            temp++;
	       else {
	           if(temp>max)
	                max=temp;
	            temp=1;
	       }
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
