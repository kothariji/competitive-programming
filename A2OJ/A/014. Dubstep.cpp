#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	set<int> s1;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		if((s[i] == 'W') and  (i+1 < s.length()) and  (i+2 < s.length()) and  (s[i+1] == 'U') and  (s[i+2] == 'B'))
		{
			s1.insert(i);
			i += 2;
		}
	}
	int flag = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(s1.find(i) != s1.end())
		{
			i +=2;
			
			if(flag==1)
			{
				cout<<" ";
				flag = 0;
			}
				
			continue;
		}
		cout<<s[i];
		flag = 1;
	}
}