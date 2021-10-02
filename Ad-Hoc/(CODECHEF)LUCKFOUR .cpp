//CPP implementation of codechef problem LUCKYFOUR
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count = 0;
	    for(int i = 0;i<s.length();i++){
	        if(s[i]=='4')
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
