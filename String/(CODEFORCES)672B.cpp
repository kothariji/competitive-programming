// soltuion for codeforces 672B - https://codeforces.com/contest/672/problem/B

#include<bits/stdc++.h>
using namespace std ;
int main() 
{   
   char S[100000];
   int n, cnt=0;
   cin>>n;
   cin>>S;
   int l = strlen(S);
   if(n < 27) {
       for(int i = 0; i < l; i++) {
        for(int j = i+1; j < l; j++) {
           if(S[i]==S[j]) {
                cnt++;
                break;
           }
        }
      }
       
   } else {
        cnt = -1;
   }
    if(cnt<26)
    cout<<cnt;
    else
    cout<<"-1";
    return 0;
}
