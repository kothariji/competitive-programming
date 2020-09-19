#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{

	int n;
	cin>>n;
	string s[4];
	map <char , int >mp1;
	for(int i=0; i<4; i++)
	{
		cin>>s[i];
		for(int j=0; j<4; j++)
			if(s[i][j] != '.')
			{
				if(mp1.find(s[i][j]) == mp1.end())
					mp1[s[i][j]] = 1;
				else
					mp1[s[i][j]]++;
			}
	}
	int limit = 2*n;

	for(auto c: mp1)
		if(limit < c.second)
		{
			cout<<"NO";
			return 0;
		}
	cout<<"YES";	


	return 0;
}