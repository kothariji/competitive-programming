#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	string s1;
	cin>>s1;
	set <char> s;
	for(auto c : s1)
		s.insert(c);
	if(s.size() %2)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
}