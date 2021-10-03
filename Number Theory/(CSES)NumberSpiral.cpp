/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1≤t≤105
1≤y,x≤109
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<queue>
#include<map>
#include<math.h>
#include<set>
#include<stack>
using namespace std;
#define ll long long 
 
//set<string> st;
 
/*int ans=0;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
char c[4] = {'U','D','L','R'};
int vis[7][7];
*/
 
/*static bool cmp(pair<int,int> &a,pair<int,int> &b) {
    return a.first<b.first;
} */
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    
    ll t;
    cin>>t;
 
    while(t--) {
        ll r,c;
        cin>>r>>c;
 
        ll n,s,x;
 
        if(r>c)
        n = r;
 
        else
        n = c;
 
        s = n*n;
 
        if(n%2) {
            if(r==n) {
                x = (s-n+1)-(n-c);
            }
 
            else
            x = (s-r+1);
        }
 
        else {
            if(r==n) {
                x = (s-c+1);
            }
 
            else {
                x = (s-n+1)-(n-r);
            }
        }
 
        cout<<x<<"\n";
    }
    return 0;
}