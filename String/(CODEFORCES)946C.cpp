//solution for 946C - https://codeforces.com/contest/946/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    char ch = 'a';
    bool flag = false;
    for (int i=0 ; i < str.size() ; i++){
        if (str[i] <= ch){
            str[i] = ch;
            if (ch == 'z'){
                flag= true;
                break;
            }
            ch= ch + 1;
        }
    }
    if (!flag){
        cout << -1 << endl;
    }
    else{
        cout << str << endl;
    }
    return 0;
}
