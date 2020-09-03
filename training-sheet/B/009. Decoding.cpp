#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX  2005
using namespace std;


int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	while(!s.empty())
	{
		int i = (s.length()-1)/2;
		cout<<s[i];
		s.erase(i,1);
	}
}
