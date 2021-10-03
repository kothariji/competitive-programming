#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    int count = 1,maxcount = 1;
    cin >> s;
    for(int i = 1; i < s.length(); i++) {
    	if(s[i-1] == s[i])
    		count++;
    	else count = 1;
    	if(maxcount < count) maxcount = count;
    }
    cout << maxcount;
    return 0;
}