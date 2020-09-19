#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++)
		cin>>s[i];
	set <char> sd,snd;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if((i==j) or ((i+j) == (n-1)))
				sd.insert(s[i][j]);
			else
				snd.insert(s[i][j]);
		}
	}
	if((sd.size() == 1) and (snd.size() == 1))
	{
		if((sd.find(s[0][0]) != sd.end()) and (snd.find(s[0][0]) == snd.end()))
			cout<<"YES";
		else
		cout<<"NO";
	}
	else
		cout<<"NO";

	return 0;
}