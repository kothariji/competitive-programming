#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u' and s[i] != 'A' and s[i] != 'E' and s[i] != 'I' and s[i] != 'O' and s[i] != 'U' and s[i] != 'Y' and s[i] != 'y')
		{
			if((int)s[i] > 96)
			{
				cout<<"."<<s[i];
			}
			else
			{
				cout<<"."<<(char)(s[i]-'A'+'a');
			}	
		}
	}
	return 0;
}