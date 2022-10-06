// Solution to Good Pairs from Codechef September Long 2022
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long arr[n],count=0,sum=0;
	     vector <long> a;
	    for(long i=0;i<n;i++)
	        cin>>arr[i];
	   sort(arr,arr+n);

	   for(long i=0;i<n;i++){
	       if(arr[i]==arr[i+1])
	            count++;
	        if (arr[i]!=arr[i+1]){
	                a.push_back(count+1);
	                count=0;
	        }
	   }
	   
	   for(long i=0;i<a.size();i++){
	       sum+=a[i]*(a[i]-1)/2;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
