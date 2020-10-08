#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        string s;
        cin>>s;
        int ans=0;
        for (int i = 0; i < s.size()-1; ++i) {
            if((s[i]=='x' and s[i+1]=='y') or (s[i]=='y' and s[i+1]=='x')){
                ans++;
                i++;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
