#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	long long t,n;cin>>t;
	while(t--){
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n%2==0)cout<<"YES"<<endl;
	    else {
	        
   sort(a, a + n);
   // Traverse the sorted array
   int c = 0;
   for (int l = 0; l < n; l++){
      // Moving the index when duplicate is found
      while (l < n - 1 && a[l] == a[l + 1]){
         l++;
      }
      c++;
   }if(c==n)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
	    }
	}
	return 0;
}
