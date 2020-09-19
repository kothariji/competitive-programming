#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for(int i=s.length()-1; i >=0; i--)
	{
		if(isalpha(s[i]) != 0)
		{
			if((s[i] == 'a') or (s[i] == 'e') or (s[i] == 'i') or (s[i] == 'o') or (s[i] == 'u') or (s[i] == 'y') or (s[i] == 'A') or (s[i] == 'E') or (s[i] == 'I') or (s[i] == 'O') or (s[i] == 'U') or (s[i] == 'Y'))
			{
				cout<<"YES";
				return 0;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"NO";
				return 0;
}