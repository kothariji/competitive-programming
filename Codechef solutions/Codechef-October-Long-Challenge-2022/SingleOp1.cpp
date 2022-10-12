// Contest Code: OCT221
// Problem Code: SINGLEOP1

/*  ------- PROBLEM STATEMENT ---------
Chef has the binary representation SS of a number XX with him. He can modify the number by applying the following operation exactly once:

Make X:=X⊕[X/(2)^y] -> (^ deontes raised to the power here)
, where(1≤Y≤∣S∣) and ⊕ denotes the bitwise XOR operation.
Chef wants to maximize the value of X after performing the operation. Help Chef in determining the value of Y which will maximize the value of X after the operation.
*/

//SOLUTION:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int turn;
    cin>>turn;
    while(turn--){
        int len;
        string binary;
        int ans = 0;
        cin>>len;
        cin>>binary;
        for(int i = 0;i<len;i++){
            if(binary[i] == '0'){
                ans++;
                cout<<i<<endl;
                break;
            }
        }
        if(ans ==0){
            cout<<len<<endl;
        }
    }
	return 0;
}
