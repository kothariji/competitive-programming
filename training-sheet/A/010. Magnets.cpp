#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
	int c = 1, q;
	cin>>q;
	string s1, s2;
	q--;
	cin>>s1;
	while(q--)
	{
		cin>>s2;
		if(s1 == s2)
			continue;
		else
		{
			s1 = s2;
			c++;
		}
	}
	cout<<c;

}