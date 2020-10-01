#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {

        set<char, char> S;

        
        int count = 0;

        for(int i=0;i<s.length();i++){
           // pair<char, char> x = make_pair(s[i], t[i]);
            S.insert(s[i], t[i]);
            count++;
        }
       //map<char, char>::iterator itr;
       set<char, char>::iterator itr;
       for(itr=S.begin(); itr!=S.end(); itr++){
           //if(x.first==x.second){ 
               cout << *itr[0] << " " << *itr[1] << endl;
               //}
           
       }
        // for(itr = mp.begin(); itr!=mp.end(); itr++){
        //     if(mp.find(itr->second)){
        //     cout << itr->first << " " << itr->second  << endl;
        //     }
        // }
        cout << endl;

        cout << s.length() - count;
      return 0;  
    }
};

int main(){

string s = "friend";
string t = "family";

Solution sol;
sol.minSteps(s, t);
return 0;


}