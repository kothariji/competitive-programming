// THIS QUESTION IS AVAILABLE ON CODECHEF https://www.codechef.com/problems/PAWRI
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
  
    int t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(i=0;i+4<s.length();i++)
        {
            if(s.substr(i,5)=="party")
            {
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
                
            }
        }
        cout<<s<<"\n";
    }
	return 0;
}