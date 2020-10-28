#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
        int start = 0, maxLen = 1;
        for(int i=1;i<s.size();i++){
            int l = i-1, r= i+1;
            while(l>=0 and r<=s.size() and s[l] == s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    start = l;
                    
                }
                l--;r++;
                
            }
            l = i-1;
            r = i;
            while(l>=0 and r<=s.size() and s[l] == s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    start = l;
                    
                }
                l--;r++;
                
            }
            
        }
        return s.substr(start, maxLen);
}
int main(){
	
	string s;
	getline(cin, s);
	cout<<longestPalindrome(s)<<endl;
	
	
	return 0;
}