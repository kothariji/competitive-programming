#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int left[26]={0};
	    int right[26]={0};
	    int len = s.length();
	    for(int i=0;i<len/2;i++)
	    {
	        int index =s[i]-'a';
	        left[index]++;
	    }

	   for(int i=(len+1)/2; i<len;i++)
	   {
	        int index =s[i]-'a';
	        right[index]++;
	   }
	   int cas=0;
	   for(int i=0;i<26;i++)
	   {
	       if(left[i]!=right[i])
	       cas=1;
	       
	   }
	    if(cas==0)
	    cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	}
	return 0;
}
