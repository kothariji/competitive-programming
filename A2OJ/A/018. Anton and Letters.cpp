#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	set <char> s1;
	for(int i=1; i < s.length()-1; i++)
		if((s[i] != ',') and (s[i] != ' '))
			s1.insert(s[i]);
	cout<<s1.size();
	return 0;
}