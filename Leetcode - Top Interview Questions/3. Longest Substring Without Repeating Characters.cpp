#include<bits/stdc++.h>
using namespace std;
#define IO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int lengthOfLongestSubstring(string str) {
    int left = 0;
    int right = 0;
    int maxx = 0;

    set<char> s;

    while(right < str.size()){
    	if( s.find(str[right]) == s.end() ) {
    		s.insert(str[right]);
    		right++;
    		int size = s.size();
    		maxx = std::max(size,maxx);
    	}
    	else{
    		s.erase(str[left]);
	    	left++;
	    }
    }
    return maxx;
}

int main(){

	IO();

	string s = "abcabcbb";
	cout<<lengthOfLongestSubstring(s);

	return 0;
}
