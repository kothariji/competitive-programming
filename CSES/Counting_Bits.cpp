#include <iostream>
#include <set>
using namespace std;
  
string s, ans;
set <char> st;
  
int main() {
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        st.insert(s[i]);
        if (st.size() == 4){
            ans += s[i];
            st.clear();
        }
    }
    for (char i: "ATCG"){
        if (!st.count(i)){
            ans += i;
            break;
        }
    }
    cout << ans << "\n";
}
