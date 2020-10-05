#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		string s,y;
		cin>>s;
		if(s.length()>10)
		{
			y+=s[0];
			y+=to_string(s.length()-2);
			y+=s[s.length()-1];
			cout<<y<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
	
return 0;	
}
