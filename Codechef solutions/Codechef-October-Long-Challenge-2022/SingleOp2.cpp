// Contest Code: OCT221
// Problem Code: SINGLEOP2

/*  ------- PROBLEM STATEMENT ---------
Chef has the binary representation SS of a number XX with him. He can modify the number by applying the following operation exactly once:

Make X:=X⊕[X/(2)^y] -> (^ deontes raised to the power here)
, where(1≤Y≤∣S∣) and ⊕ denotes the bitwise XOR operation.
Chef wants to minimise the value of X after performing the operation. Help Chef in determining the value of Y which will maximize the value of X after the operation.
*/

//SOLUTION:
#include <bits/stdc++.h>
using namespace std;

inline void add(int &ans){
    ans++;
}

int main() {
    int turn;
    cin>>turn;
    while(turn--){
        int len;
        string binary;
        int ans = 1;
        cin>>len;
        cin>>binary;
        for(int i = 1;i<len;i++){
            if(binary[i] == '1'){
                break;
            }
            add(ans);
        }
        cout<<ans<<endl;
    }
	return 0;
}