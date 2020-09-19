#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	unordered_set <string> s1;
	s1.insert("ABSINTH");
	s1.insert("BEER");
	s1.insert("BRANDY");
	s1.insert("CHAMPAGNE");
	s1.insert("GIN");
	s1.insert("RUM");
	s1.insert("SAKE");
	s1.insert("TEQUILA");
	s1.insert("VODKA");
	s1.insert("WHISKEY");
	s1.insert("WINE");
	int count = 0;
	int n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		if(isdigit(s[0]))
		{
			int age  = stoi(s);
			if(age < 18)
				count++;
		}
		else
		{
			if(s1.find(s) != s1.end())
				count++;
		}
	}
	cout<<count;


	return 0;
}