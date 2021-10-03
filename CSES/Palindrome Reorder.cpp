#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
typedef long long ll;

 
//void subMain(){
//}
 
string solve(string str){
    unordered_map<char, int> hmap;
    for(int i = 0; i < str.length(); i++){
        hmap[str[i]]++;
    }
    int oddcount = 0;
    char oddchar;
    for(auto x : hmap){
        if(x.second %2 != 0){
            oddcount++;
            oddchar = x.first;
        }
    }
    if(oddcount > 1 || oddcount==1 && str.length()%2 == 0)
        return "NO SOLUTION";
    string firsthalf = "", secondhalf = "";
    for(auto x : hmap){
        string s(x.second/2, x.first);
        firsthalf = firsthalf + s;
        secondhalf = s + secondhalf;
    }
    return (oddcount == 1) ?
         (firsthalf + oddchar + secondhalf) :
         (firsthalf + secondhalf);
}
 
 
int32_t main(){
 
 
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	/*ll t;
	cin >> t;
	while(t-- > 0){
	    subMain();
	}*/
	//subMain();
	string s;
	cin >> s;
	cout << solve(s);
 
	return 0;
}