#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	int i=0, j = 0;
	while((i < s.length()) and (j < t.length()))
	{
		if(s[i] == t[j])
		{
			i++;
		}
			j++;
	}
	cout<<i+1;
	return 0;
}