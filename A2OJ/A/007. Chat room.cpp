#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	cin>>s;
	if(s.length() < 5)
		cout<<"NO";
	else
	{
		string check  = "hello";
		int i=0, j=0;
		while((i < 5) and (j<s.length()))
		{
			if(s[j] == check[i])
			{
				j++;
				i++;
			}
			else
				j++;
		}
		if(i == 5)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}