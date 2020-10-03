#include <bits/stdc++.h>

using namespace std;

 

int main() {

	int t,count;

	cin>>t;

string s;

	for(int i=0;i<t;i++){

	 cin>>s;

	 //cout<<s;

	 count=0;

	 for(int j=0;j<s.size();j++){

	 //cout<<s.size();

	 if(s[j]=='Q' || s[j]=='R' || s[j]=='O' || s[j]=='P' || s[j]=='A' || s[j]=='D'){

	 count++;

	 // cout<<count;

	 }

	 else if(s[j]=='B'){

	 count+=2;

	 }

	 }

	 s.clear();

	 cout<<count<<endl;

}

return 0;

}

