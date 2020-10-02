#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t =1;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    int arr[n];
	    for(long long i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    long long sum=0;
	    for(long long i=0;i<n-1;i++){
	        long long ma = max(arr[i+1],arr[i]);
	        long long mi= min(arr[i+1],arr[i]);
	        if(ma!=mi){
	            sum += abs((ma-1) -mi);
	        }
	    }
	    cout << sum<<endl;
	}
	return 0;
}
