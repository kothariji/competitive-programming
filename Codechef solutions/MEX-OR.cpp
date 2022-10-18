"Codechef problem statement"
"https://www.codechef.com/OCT21C/problems/MEXOR"

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, ans = 1;
	    cin>>x;
	    if(x == 0){
	        cout<<1<<endl;
	    }
	    else if(x == 1 || x == 2){
	        cout<<2<<endl;
	    }
	    else{
	        while(ans*2 <= x){
	            ans*=2;
	        }
	        if(ans == x){
	            cout<<x<<endl;
	        }
	        else if(x ==(2*ans-1)){
	            cout<<x+1<<endl;
	        }
	        else{
	            cout<<ans<<endl;
	        }
	    }
	}
	return 0;
}